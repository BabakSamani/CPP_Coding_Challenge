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

class car : public MotorVehicle
{
private:
	std::string VIN;
	std::string made;
	std::string year;
	std::string model;
	std::string color;

	double price;

public:
	// CClass constructor and destructor
	car();
	car(std::string VIN, std::string made, std::string year, std::string model, std::string color);
	~car();

	// Class setters
	void setVIN(std::string _VIN);
	void setMade(std::string _made);
	void setYear(std::string _year);
	void setModel(std::string _model);
	void setColor(std::string _color);
	void setPrice(double _price);

	// Class getters
	std::string getVIN() const;
	std::string getMade() const;
	std::string getYear() const;
	std::string getModel() const;
	std::string getColor() const;
	double getPrice() const;


	
};

#endif
