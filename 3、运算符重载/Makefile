objects = 9_MyString_main.o 9_MyString.o
CC=g++
CFLAGS = -g
all:MyString
MyString:$(objects)
	$(CC)  -o MyString $(objects) $(CFLAGS) -Wall
clean:
	rm -rf a.out *.o
