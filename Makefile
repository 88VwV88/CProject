CC := gcc
CCFLAGS := -g -Wall -O0
LDFLAGS := -lm

all: src/*
	@$(CC) $(CCFLAGS) src/* $(LDFLAGS) -o ./build/app

test: all 
	@./build/app

.PHONY: all test
	