#include <iostream>
#include <string>

#include "people.hpp"

// Class constructor
People::People(){}

// Class setters
void People::setFirstName(std::string _firstName){
    this->firstName = _firstName;
}

void People::setLastName(std::string _lastName){
    this->lastName = _lastName;
}

void People::setAge(int _age){
    this->age = _age;
}

void People::setGender(std::string _gender){
    this->gender = _gender;
}

void People::setNationality(std::string _nationality){
    this->nationality = _nationality;
}

void People::setOccupation(std::string _occupation){
    this->occupation = _occupation;
}

// Class getters
std::string People::getFirstName() const{
    return this->firstName;
}
std::string People::getLastName() const{
    return this->lastName;
}
int People::getAge() const{
    return this->age;
}
std::string People::getGender() const{
    return this->gender;
}
std::string People::getNationality() const{
    return this->nationality;
}
std::string People::getOccupation() const{
    return this->occupation;
}