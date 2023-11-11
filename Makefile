CC := gcc
CCFLAGS := -g -Wall -O0
LDFLAGS := -lm
SRC_DIR := ~/code/cpp/CProject/src
BUILD_DIR := build


all: $(SRC_DIR)/*
	@$(CC) $(CCFLAGS) $(SRC_DIR)/* $(LDFLAGS) -o $(BUILD_DIR)/bin/app

test: all
	@./$(BUILD_DIR)/bin/app

.PHONY: all asm test
	