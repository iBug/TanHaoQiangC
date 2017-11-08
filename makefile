.PHONY: all clean

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %, $(SRCS))
CC := gcc
CFLAGS = $(CFLAGS) -O3 -s -Wall -pie

all: $(OBJS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
