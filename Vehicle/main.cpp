//
//  main.cpp
//  car_dealership
//
//  Created by Babak Jafari on 12/27/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//

#include <iostream>
#include <string>
#include "vehicle.hpp"

int main(int argc, const char * argv[]) {

    // Create an instance of vehicle class
    Vehicle *v = new Vehicle();
    
    std::string type;
    std::cout << "Enter the type of the vehicle? ";
    std::cin >> type;
    
    v->setType(type);
    
    std::cout << "Vehicle type: " << v->getType() << std::endl;


    // Create new Bicycle object 
    Bicycle b;

    b.setBikeType("Recumbent Bick");
    b.setSize(26);
    b.setPrice(155);
    b.setSpeed(2.50);

    std::cout << "Bicycle type is: " << b.getBikeType() << " and its speed is: " << b.getSpeed() << std::endl;
    
    return 0;
}
