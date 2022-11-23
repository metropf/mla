NC   = \033[0m
BLUE = \033[1;34m

.PHONY: test

test:
	@ echo -e "$(BLUE)BUILDING TEST$(NC)" && make clean all -C test
	@ echo -e "$(BLUE)RUNNING TEST$(NC)" && ./test/build/test
