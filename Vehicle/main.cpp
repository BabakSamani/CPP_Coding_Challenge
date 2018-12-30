//
//  main.cpp
//  car_dealership
//
//  Created by Babak Samani on 12/27/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//

#include <iostream>
#include <string>
#include "vehicle.hpp"
#include "car.hpp"

int main(int argc, const char * argv[]) {

    // Create an instance of vehicle class
    Vehicle *v = new Vehicle();
    
    std::string type;
    std::cout << "Enter the type of the vehicle? ";
    std::cin >> type;
    
    v->setType(type);
    
    std::cout << "Vehicle type: " << v->getType() << std::endl;

    // Get the vehicle type from user "Recumbent Bick"
    std::cout << "Enter the type of the vehicle? ";
    std::cin >> type;

    // Create new Bicycle object 
    Bicycle b;

    b.setType(type);
    b.setSize(26);
    b.setPrice(155);
    b.setSpeed(2.50);

    std::cout << "Vehicle type is: " << b.getType() << " and its speed is: " << b.getSpeed() << std::endl;

    // Creating an instance of MotorVehicle class
    MotorVehicle mv;

    mv.setType("MotorBike");
    mv.setEngineCapacity(0.15); // 150 cc
    mv.setLicencePlate("PLV_3487");
    mv.setSpeed(125);

    std::cout << "Type of this vehicle is: " << mv.getType() << std::endl;

    // Create an instance of car class
    Car _car("vin", "Hyundai", "2013", "Santafe", "Black", 20000, 45000);
    _car.setType("Sedan");

    _car.printCarInfo();

    Car cars[5];

    
    return 0;
}
