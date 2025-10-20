# Compiler and flags
CXX     := g++
CXXFLAGS:= -Wall -O2 -MMD -MP
LDFLAGS := -lX11
CXX_INC := -Iinclude

# Directories
SRC_DIR := src
BUILD_DIR := build

# Files
TARGET := d3a d3b d4a d5a
# common object files needed for exercises 1 and 2; the turtle source code.
OBJ_TEST1 := $(BUILD_DIR)/turtle.o $(BUILD_DIR)/figure.o $(BUILD_DIR)/triangle.o
OBJ_TEST2 := $(BUILD_DIR)/turtle.o $(BUILD_DIR)/figure.o $(BUILD_DIR)/rectangle.o
OBJ_TEST12 := $(BUILD_DIR)/turtle.o $(BUILD_DIR)/figure.o $(BUILD_DIR)/rectangle.o $(BUILD_DIR)/triangle.o

# Default rule
all: $(TARGET)

d3a: $(OBJ_TEST1) $(BUILD_DIR)/driver3a.o
d3b: $(OBJ_TEST1) $(BUILD_DIR)/driver3b.o
d4a: $(OBJ_TEST2) $(BUILD_DIR)/driver4a.o
d5a: $(OBJ_TEST12) $(BUILD_DIR)/driver5a.o

# Link step
$(TARGET):
	$(CXX) $^ -o $@ $(LDFLAGS)

# Compile step
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(CXX_INC) -c $< -o $@

# Include dependency files if they exist
-include $(wildcard $(BUILD_DIR)/*.d)

# Create build directory if missing
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
