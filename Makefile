################################################

BIN		:= bindechexascii
OBJ		:= bindechexascii.o
SRC		:= bindechexascii.c

CC		:= gcc
CFLAGS+		:= -g -march=native
LFLAGS		:=

################################################

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS) $(LFLAGS) $(OBJ) -o $(BIN)
$(OBJ): $(SRC)
	$(CC) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -f $(BIN) $(OBJ)
