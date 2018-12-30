CPP=g++
CPPFLAGS=-Wall -g

vehicle: main.o vehicle.o car.o
	$(CPP) $(CPPFLAGS) -o vehicle main.o vehicle.o car.o
main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp
vehicle.o:   vehicle.cpp vehicle.hpp
	$(CPP) $(CPPFLAGS) -c vehicle.cpp
car.o:	car.cpp car.hpp
	$(CPP) $(CPPFLAGS) -c car.cpp
clean:
	rm -f vehicle *.o 