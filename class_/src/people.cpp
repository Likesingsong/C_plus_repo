//
// Created by dell on 2022-5-12.
//

#include "people.h"

// Parameterized constructor definition
People::People(int num, const std::string& name, char gender, const std::string& birth, const std::string& id) :
    _number(num), _name(name), _gender(gender), _birth(birth), _id(id) {
}
// Copy constructor definition
People::People(const People& people) {
    _number = people._number;
    _name = people._name;
    _gender = people._gender;
    _birth = people._birth;
    _id = people._id;
}

// Member function Show definition
void People::Show() {
    std::cout << "Number: " << _number << ", Name: " << _name << ", Gender: " << _gender << ", Birth Date: " << _birth << ", ID: " << _id;
}

const std::string& People::getName() const {
    return _name;
}

void People::setName(const std::string& name) {
    _name = name;
}

const std::string& People::getBirth() const {
    return _birth;
}

void People::setBirth(const std::string& birth) {
    _birth = birth;
}

const std::string& People::getId() const {
    return _id;
}

void People::setId(const std::string& id) {
    _id = id;
}

int People::getNumber() const {
    return _number;
}

void People::setNumber(int number) {
    _number = number;
}

char People::getGender() const {
    return _gender;
}

void People::setGender(char gender) {
    _gender = gender;
}
