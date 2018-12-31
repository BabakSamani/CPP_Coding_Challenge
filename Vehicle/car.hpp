//
//  car.hpp
//  car_dealership
//
//  Created by Babak Samani on 12/29/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//

#ifndef car_hpp
#define car_hpp

#include <iostream>
#include <string>

#include "vehicle.hpp"

using namespace std;

class Car : public MotorVehicle
{
private:
	string VIN;
	string made;
	string year;
	string model;
	string color;

	double price;
	int mileage;

public:
	// Class constructor and destructor
	// Constructor overloading
	// First constructor
	Car();
	// Second constructor
	Car(string _VIN, string _made, string _year, 
		string _model, string _color, double _price, int _mileage);
	
	// Class destructor
	~Car();

	// Class setters
	void setVIN(string _VIN);
	void setMade(string _made);
	void setYear(string _year);
	void setModel(string _model);
	void setColor(string _color);
	void setPrice(double _price);
	void setMileage(int _mileage);

	// Class getters
	string getVIN() const;
	string getMade() const;
	string getYear() const;
	string getModel() const;
	string getColor() const;
	double getPrice() const;
	int getMileage() const;


	// A function for displaying the info of a car
	void printCarInfo();

	
};

#endif
