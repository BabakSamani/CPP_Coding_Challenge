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

// Supper class
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
// Sub class
class Bicycle : public Vehicle {
    private:
        int size;
        double price;
    public:
        // Class constructor and destructor
        Bicycle();
        ~Bicycle();

        // Class setters
        void setSize(int _size);
        void setPrice(double _price);

        // Class getters
        int getSize() const;
        double getPrice() const;

};

// MotorVehicle class extends Vehicle class
class MotorVehicle : public Vehicle {
    private:
        double engineCapacity;
        std::string licencePlate;
        double MPG;

    public:
        // Class constructor and destructor
        MotorVehicle();
        ~MotorVehicle();

        // Class setters
        void setEngineCapacity(double _engineCapacity);
        void setLicencePlate(std::string _licencePlate);
        void setMPG(double _mpg);

        // Class getters
        double getEngineCapacity() const;
        std::string getLicencePlate() const;
        double getMPG() const;
};

// MotorBike class definition which extends MotorVehicle class and Vehicle class, Multilevel Inheritance
class MotorBike : public MotorVehicle {
    private:
        std::string made;
        std::string year;
        std::string model;
    public:
        // Class constructor and destructor
        MotorBike();
        ~MotorBike();

        // Class setters
        void setMade(std::string _made);
        void setYear(std::string _year);
        void setModel(std::string _model);

        // Class getters
        std::string getMade() const;
        std::string getYear() const;
        std::string getModel() const;
};


#endif /* vehicle_hpp */
