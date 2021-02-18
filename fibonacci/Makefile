CC=g++
CFLAGS=-c -Wall
SOURCES=fib.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=fib

default: fib.exe

fib.o: fib.cpp
	$(CC) $(CFLAGS) $(SOURCES) -o $(OBJECTS)

fib.exe: $(OBJECTS)
	$(CC) $(OBJECTS) -o fib.exe

clean:
	-rm -f *.o *.exe


