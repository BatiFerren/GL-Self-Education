CC=g++
CFLAGS=-std=c++17 -c -Wall -pthread
SOURCES=threads.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=threads

default: threads.exe

threads.o: threads.cpp
	$(CC) $(CFLAGS) $(SOURCES) -o $(OBJECTS)

threads.exe: $(OBJECTS)
	$(CC) -pthread $(OBJECTS) -o threads.exe

clean:
	-rm -f *.o *.exe


