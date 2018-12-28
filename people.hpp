#ifndef PEOPLE_HPP
#define PEOPLE_HPP

#include <string>
// using namespace std;

class People {
    private: 
        std::string firstName, lastName;
        int age;
        std::string gender;
        std::string nationality;
        std::string occupation;

    public:
        // Class constructor
        People();
        ~People();

        // Setters
        void setFirstName(std::string _firstName);
        void setLastName(std::string _lastName);
        void setAge(int _age);
        void setGender(std::string _gender);
        void setNationality(std::string _nationality);
        void setOccupation(std::string _occupation);

        // Getters
        std::string getFirstName() const;
        std::string getLastName() const ;
        int getAge() const;
        std::string getGender() const;
        std::string getNationality() const;
        std::string getOccupation() const;
};

#endif