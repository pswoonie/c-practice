#This is a makefile

CC = clang
CFLAGS = -g -Wall
SRCS = main.c func.c
OBJS = main.o func.o
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	@$(CC) -c main.c

func.o: func.c
	@$(CC) -c func.c

run:
	@./$(TARGET)

clean:
	@rm -rf *.o *.exe *.out *~ *.dSYM $(TARGET)