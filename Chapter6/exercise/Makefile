CC     = gcc
CFLAGS = -Wall -Werror
SOURCE = $(wildcard *.c)
EXE    = $(SOURCE:.c=)

all: $(EXE)

$(EXE):
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm $(EXE)
