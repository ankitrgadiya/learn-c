CC=gcc
DIRS = $(wildcard ./Chapter*)

.PHONY: all
all:
	@for each in $(DIRS); do $(MAKE) -C $$each; done

.PHONY: clean
clean:
	@for each in $(DIRS); do $(MAKE) clean -C $$each; done

