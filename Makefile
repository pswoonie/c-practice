#This is a makefile

CC = clang
CFLAGS = -g -Wall
SRCS = hello.c oop.c
OBJS = hello.o oop.o
TARGET = hello

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

hello.o: hello.c
	@$(CC) -c hello.c

oop.o: oop.c
	@$(CC) -c oop.c

run:
	@./$(TARGET)

clean:
	@rm -rf *.o *.exe *.out *~ *.dSYM $(TARGET)