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

public:
	car();
	car(std::string VIN, std::string made, std::string year, std::string model, std::string color);
	~car();
	
};

#endif
