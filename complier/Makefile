# Compiler
CC = gcc

# Directories
SRC_DIR = src/lexer
BIN_DIR = bin

# Source and Output Files
SRC = $(SRC_DIR)/lexer.c
OUT = $(BIN_DIR)/lexer

# Default Rule
all: $(OUT)

# Compilation Rule
$(OUT): $(SRC)
	@mkdir -p $(BIN_DIR)  # Create output directory if it doesn't exist
	$(CC) -o $(OUT) $(SRC)

# Clean Rule
clean:
	rm -f $(OUT)

# Phony Targets
.PHONY: all clean

