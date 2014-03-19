################################################

BIN		:= conv
OBJ		:= conv.o
SRC		:= conv.c

CC		:= gcc
CFLAGS		:= -g -march=native
LFLAGS		:=

################################################

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LFLAGS) $(OBJ) -o $(BIN)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -f $(BIN) $(OBJ)
