CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -MMD -MP -Iinclude

TARGET = app
SRC = src/main.c src/buyer.c
OBJ = $(SRC:.c=.o)
DEPS = $(OBJ:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ) $(DEPS)

-include $(DEPS)
