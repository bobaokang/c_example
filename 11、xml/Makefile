LIB=-lpthread
CFLAGS =-g
CC=g++
all:test_xml
test_xml:main.cpp tinyxml2.cpp
	$(CC) $(CFLAGS) $(LIB) -o test_xml main.cpp tinyxml2.cpp

clean:
	rm -rf test_xml
