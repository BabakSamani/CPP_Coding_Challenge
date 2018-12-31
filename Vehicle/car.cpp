//
//  car.cpp
//  car_dealership
//
//  Created by Babak Samani on 12/29/18.
//  Copyright © 2018 Babak Samani. All rights reserved.
//

#include <iostream>
#include <string>

#include "vehicle.hpp"
#include "car.hpp"

using namespace std;

Car::Car(){
	cout << "First class constructor is called without any arguments for Car class.\n";
}

Car::Car(string _VIN, string _made, string _year, 
		 string _model, string _color, double _price, int _mileage){
	this->VIN = _VIN;
	this->made = _made;
	this->year = _year;
	this->model = _model;
	this->color = _color;
	this->price = _price;
	this->mileage = _mileage;

}

Car::~Car(){
	cout << "Car class destructor is called\n";
}
// Class setters
void Car::setVIN(string _VIN) { this->VIN = _VIN; }
void Car::setMade(string _made){ this->made = _made; }
void Car::setYear(string _year){ this->year = _year; }
void Car::setModel(string _model){ this->model = _model; }
void Car::setColor(string _color){ this->color = _color; }
void Car::setPrice(double _price){ this->price = _price; }
void Car::setMileage(int _mileage){ this->mileage = _mileage; }

// Class getters
string Car::getVIN() const { return this->VIN; }
string Car::getMade() const { return this->made; }
string Car::getYear() const { return this->year; }
string Car::getModel() const { return this->model; }
string Car::getColor() const { return this->color; }
double Car::getPrice() const { return this->price; }
int Car::getMileage() const { return this->mileage; }

// A function for printing out a car info
void Car::printCarInfo(){
	string _vin, _made, _model, _year, _color;
	
	int _mileage;
	double _price;

	_vin   = this->VIN;
	_made  = this->made;
	_year  = this->year;
	_model = this->model;
	_color = this->color;

	_mileage = this->mileage;
	_price   = this->price;

	// Check for NULL values
	if ( (uintptr_t)&this->VIN == (uintptr_t)NULL ) {
		_vin = "NA";
	}

	if ( (uintptr_t)&this->made == (uintptr_t)NULL) {
		_made = "NA";
	}

	if ( (uintptr_t)&this->year == (uintptr_t)NULL) {
		_year = "NA";
	}

	if ( (uintptr_t)&this->color == (uintptr_t)NULL) {
		_color = "NA";
	}
	if ( (uintptr_t)&this->model == (uintptr_t)NULL) {
		_model = "NA";
	}
	if ( (uintptr_t)&this->mileage == (uintptr_t)NULL) {
		_mileage = -1;
	}

	if ( (uintptr_t)&this->price == (uintptr_t)NULL) {
		_price = -1;
	}

	cout << "VIN: " << _vin << endl;			// string
	cout << "Made: " << _made << endl;		// string
	cout << "Year: " << _year << endl;		// string
	cout << "Model: " << _model << endl;		// string
	cout << "Color: " << _color << endl;		// string
	cout << "Mileage: " << _mileage << endl; 	// int
	cout << "Price: " << _price << endl; 		// double
	
}









