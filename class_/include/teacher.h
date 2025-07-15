//
// Created by dell on 2022-5-12.
//

#pragma once

#include "people.h"
#include <string>

class Teacher :virtual public People {
public:
    // Default constructor
    Teacher() = default;
    // Destructor
    ~Teacher() = default;
    // Parameterized constructor
    Teacher(int num, const std::string& name, char gender, const std::string& birth, const std::string& id, const std::string &principalship,
            const std::string &department);
    // Copy constructor
    Teacher(const Teacher& teacher);
    // Print information
    void Show();
    // Get principalship
    const std::string &getPrincipalship() const;
    // Set principalship
    void setPrincipalship(const std::string &principalship);
    // Set department
    const std::string &getDepartment() const;
    // Set department
    void setDepartment(const std::string &department);

protected:
    std::string principalship;
    std::string department;
};
