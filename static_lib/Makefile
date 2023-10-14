CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.
LDFLAGS = -lm  # Link to math library used for square root
SRC_DIR = .
OBJ_DIR = obj
SOURCES = $(filter-out $(SRC_DIR)/main.c, $(wildcard $(SRC_DIR)/*.c))
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
EXECUTABLE = main
LIBRARY = libmylib.a  # Static library

.PHONY: all clean

all: $(EXECUTABLE) $(LIBRARY)

$(EXECUTABLE): $(OBJ_DIR)/main.o $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(LIBRARY): $(OBJECTS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(EXECUTABLE) $(LIBRARY)

