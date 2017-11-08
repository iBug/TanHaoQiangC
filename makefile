.PHONY: all clean

SRC = $(wildcard *.c)
OBJS = $(SRCS:.c=)
CC := gcc
CFLAGS = $(CFLAGS) -O3 -s -Wall -pie

all: $(OBJS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $OBJS
