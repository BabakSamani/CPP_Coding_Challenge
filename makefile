CC=g++
CPPFLAGS=-Wall -g

people: main.o people.o
	$(CC) $(CPPFLAGS) -o people main.o people.o
main.o: main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp
people.o:   people.cpp people.hpp
	$(CC) $(CPPFLAGS) -c people.cpp
clean:
	rm -f people *.o 