################################################

BIN		:= bindechexascii
SRC		:= main.c converter.c num_check.c

CC		:= gcc
CFLAGS		:= -g -std=gnu99 -Iinclude -march=native

################################################

all: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(SRC) -o $(BIN) $(LDFLAGS)

clean:
	rm -f $(BIN)
