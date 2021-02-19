CC=g++
CFLAGS=-c -Wall
SOURCES=stack.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=stack

default: stack.exe

stack.o: stack.cpp
	$(CC) $(CFLAGS) $(SOURCES) -o $(OBJECTS)

stack.exe: $(OBJECTS)
	$(CC) $(OBJECTS) -o stack.exe

clean:
	-rm -f *.o *.exe


