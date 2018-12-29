//
//  vehicle.cpp
//  car_dealership
//
//  Created by Babak Jafari on 12/27/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//
#include <iostream>
#include "vehicle.hpp"

// Vehicle class -----------------------------------------------------------------------------------------------
Vehicle::Vehicle(){
	std::cout << "Vehicle constructor is called\n";
}

Vehicle::~Vehicle(){
	std::cout << "Vehicle destructor is called\n";
}

// Class setters
void Vehicle::setType(std::string _type){
    this->type = _type;
}

void Vehicle::setSpeed(double _speed){
	this->speed = _speed;
}

// Class getters
std::string Vehicle::getType() const {
    return this->type;
}

double Vehicle::getSpeed() const {
	return this->speed;
}

// Bicycle class -----------------------------------------------------------------------------------------------
Bicycle::Bicycle(){
	std::cout << "Bicycle constructor is called\n";
}

Bicycle::~Bicycle(){
	std::cout << "Bicycle destructor is called\n";
}

// Bicycle class setters
void Bicycle::setSize(int _size){
	this->size = _size;
}

void Bicycle::setBikeType(std::string _bikeType){
	this->bikeType = _bikeType;
}

void Bicycle::setPrice(double _price){
	this->price = _price;
}

// Bicycle class getters
int Bicycle::getSize() const {
	return this->size;
}

std::string Bicycle::getBikeType() const {
	return this->bikeType;
}

double Bicycle::getPrice() const {
	return this->price;
}


// MotorVehicle class ------------------------------------------------------------------------------------------
MotorVehicle::MotorVehicle() {
	std::cout << "MotorVehicle class constructor is called\n";
}

MotorVehicle::~MotorVehicle() {
	std::cout << "MotorVehicle class destructor is called\n";
}

// MotorVehicle class setters implementation
void MotorVehicle::setEngineCapacity(double _engineCapacity){
	this->engineCapacity = _engineCapacity;
}

void MotorVehicle::setLicencePlate(std::string _licencePlate){
	this->licencePlate = _licencePlate;
}

// MotorVehicle class getters implementation
double MotorVehicle::getEngineCapacity() const {
	return this->engineCapacity;
}

std::string MotorVehicle::getLicencePlate() const {
	return this->licencePlate;
}


























