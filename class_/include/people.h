//
// Created by dell on 2022-5-12.
//

#pragma once

#include <iostream>
#include <string>

class People {
public:
	// Default constructor
	People() {}
	// Destructor
	~People() {}
	// Parameterized constructor
	People(int num, const std::string& name, char gender, const std::string& birth, const std::string& id);
	// Copy constructor
	People(const People& people);
	// Print information
	void Show();
	// Get name
	const std::string& getName() const;
	// Set name
	void setName(const std::string& name);
	// Get birth
	const std::string& getBirth() const;
	// Set birth
	void setBirth(const std::string& birth);
	// Get id
	const std::string& getId() const;
	// Set id
	void setId(const std::string& id);
	// Get gender
	char getGender() const;
	// Set gender
	void setGender(char gender);
	// Get number
	int getNumber() const;
	// Set number
	void setNumber(int number);

protected:
	std::string _name;
	std::string _birth;
	std::string _id;
	char _gender;
	int _number;
};
