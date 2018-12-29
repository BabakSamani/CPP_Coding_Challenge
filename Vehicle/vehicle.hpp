//
//  vehicle.hpp
//  car_dealership
//
//  Created by Babak Samani on 12/27/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//

#ifndef vehicle_hpp
#define vehicle_hpp

#include <iostream>

class Vehicle {
    private:
        std::string type;
        double speed;
    public:
        // Class constructor and destructor
        Vehicle();
        ~Vehicle();
    
        // Class getters
        void setType(std::string _type);
        void setSpeed(double _speed);
    
        // Class setters
        std::string getType() const;
        double getSpeed() const;
};

// Bicycle class extends Vehicle class and inherits some attributes from Vehicle class
class Bicycle : public Vehicle {
    private:
        int size;
        std::string bikeType;
        double price;
    public:
        // Class constructor and destructor
        Bicycle();
        ~Bicycle();

        // Class setters
        void setSize(int _size);
        void setBikeType(std::string _bikeType);
        void setPrice(double _price);

        // Class getters
        int getSize() const;
        std::string getBikeType() const;
        double getPrice() const;

};

// MotorVehicle class extends Vehicle class
class MotorVehicle : public Vehicle {
    private:
        double engineCapacity;
        std::string licencePlate;

    public:
        // Class constructor and destructor
        MotorVehicle();
        ~MotorVehicle();

        // Class setters
        void setEngineCapacity(double _engineCapacity);
        void setLicencePlate(std::string _licencePlate);

        // Class getters
        double getEngineCapacity() const;
        std::string getLicencePlate() const;
};

#endif /* vehicle_hpp */
