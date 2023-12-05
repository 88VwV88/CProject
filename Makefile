CC := gcc
CCFLAGS := -g -Wall -O0 -std=c17
LDFLAGS := -lm
SRC_DIR := ~/code/cpp/CProject/src
BUILD_DIR := build


all: $(SRC_DIR)/*
	@$(CC) $(CCFLAGS) $(SRC_DIR)/*.c $(LDFLAGS) -o $(BUILD_DIR)/bin/app
	@echo Compiled Successfully!
	@echo ----------------------

test: all
	@./$(BUILD_DIR)/bin/app
	@echo ----------------------

.PHONY: all asm test
	