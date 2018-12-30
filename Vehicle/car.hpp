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

class Car : public MotorVehicle
{
private:
	std::string VIN;
	std::string made;
	std::string year;
	std::string model;
	std::string color;

	double price;
	int mileage;

public:
	// Class constructor and destructor
	// Constructor overloading
	// First constructor
	Car();
	// Second constructor
	Car(std::string _VIN, std::string _made, std::string _year, 
		std::string _model, std::string _color, double _price, int _mileage);
	
	// Class destructor
	~Car();

	// Class setters
	void setVIN(std::string _VIN);
	void setMade(std::string _made);
	void setYear(std::string _year);
	void setModel(std::string _model);
	void setColor(std::string _color);
	void setPrice(double _price);
	void setMileage(int _mileage);

	// Class getters
	std::string getVIN() const;
	std::string getMade() const;
	std::string getYear() const;
	std::string getModel() const;
	std::string getColor() const;
	double getPrice() const;
	int getMileage() const;


	// A function for displaying the info of a car
	void printCarInfo();

	
};

#endif
