CC   = gcc
DIRS = example exercise

.PHONY: all
all:
	@for each in $(DIRS); do $(MAKE) -C $$each; done

.PHONY: clean
clean:
	@for each in $(DIRS); do $(MAKE) clean -C $$each; done
