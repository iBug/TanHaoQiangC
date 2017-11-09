.PHONY: all clean

SRCS = $(wildcard *.c)
BINS = $(patsubst %.c, %, $(SRCS))
CC := gcc
CFLAGS := $(CFLAGS) -Wall

all: $(BINS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(BINS)
