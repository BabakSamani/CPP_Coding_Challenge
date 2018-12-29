CPP=g++
CPPFLAGS=-Wall -g

vehicle: main.o vehicle.o
	$(CPP) $(CPPFLAGS) -o vehicle main.o vehicle.o
main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp
vehicle.o:   vehicle.cpp vehicle.hpp
	$(CPP) $(CPPFLAGS) -c vehicle.cpp
clean:
	rm -f vehicle *.o 