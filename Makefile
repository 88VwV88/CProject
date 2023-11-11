CC := gcc
CCFLAGS := -g -Wall -O2
LDFLAGS := -lm

all: src/*
	$(CC) $(CCFLAGS) src/* $(LDFLAGS)
	