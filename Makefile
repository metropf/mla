NC     = \033[0m
BLUE   = \033[1;34m
CYAN   = \033[1;36m
GREEN  = \033[1;32m
YELLOW = \033[1;33m

CC = clang
LD = ar

CFLAGS = -std=c11 -Wall -pedantic -Iinclude/MLA -Isrc -Iassets -fPIC
LDFLAGS = rcs

CFLAGS_DEB = -O0 -g -gdwarf-4
CFLAGS_REL = -O3

rwildcard = $(foreach d, $(wildcard $1*), $(call rwildcard, $d/, $2) $(filter $(subst *, %, $2), $d))

OBJ_DEB_DIR = build/debug/obj
OBJ_REL_DIR = build/release/obj
SRC         = $(call rwildcard, src, *.c)
OBJ_DEB     = $(patsubst src/%.c, $(OBJ_DEB_DIR)/%.o.d, $(SRC))
OBJ_REL     = $(patsubst src/%.c, $(OBJ_REL_DIR)/%.o,   $(SRC))

LIB_REL = build/release/libmla.a
LIB_DEB = build/debug/libmla.a

.PHONY: debug release test clean cleand cleanr

debug: $(OBJ_DEB)
	@ echo -e "$(GREEN)LINKING LIBRARY$(NC) $(LIB_DEB)"
	@ $(LD) $(LDFLAGS) $(LIB_DEB) $^ $(DEPLIBS)

release: $(OBJ_REL)
	@ echo -e "$(GREEN)LINKING LIBRARY$(NC) $(LIB_REL)"
	@ $(LD) $(LDFLAGS) $(LIB_REL) $^ $(DEPLIBS)

$(OBJ_REL_DIR)/%.o: src/%.c
	@ mkdir -p $(@D)
	@ echo -e "$(GREEN)COMPILING OBJECT$(NC) $@"
	@ $(CC) $(CFLAGS) $(CFLAGS_REL) -c $< -o $@

$(OBJ_DEB_DIR)/%.o.d: src/%.c
	@ mkdir -p $(@D)
	@ echo -e "$(GREEN)COMPILING OBJECT$(NC) $@"
	@ $(CC) $(CFLAGS) $(CFLAGS_DEB) -c $< -o $@

test: debug
	@ make -C test
	@ echo -e "$(BLUE)RUNNING TEST$(NC)" && ./test/build/test

clean: cleand cleanr

cleand:
	@ echo -e "$(YELLOW)CLEANING DEBUG BUILD$(NC)"
	@ rm -rf build/debug

cleanr:
	@ echo -e "$(YELLOW)CLEANING RELEASE BUILD$(NC)"
	@ rm -rf build/release
