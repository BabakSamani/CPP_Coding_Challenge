#include <iostream>
#include <string>

#include "people.hpp"

int main(){

    People *p = new People();

    std::string firstName = "James";
    std::string lastName = "Olsen";

    p->setFirstName(firstName);
    p->setLastName(lastName);

    std::cout << p->getFirstName() << " " << p->getLastName() << std::endl; 
    return 0;
}