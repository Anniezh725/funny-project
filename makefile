# Funny Makefile


CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

.PHONY: all
all: funnyprogram

funnyprogram: funnyprogram.c


.PHONY: clean
clean:
	rm -f funnyprogram

