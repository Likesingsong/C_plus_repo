//
// Created by dell on 2022-5-12.
//

#pragma once

#include "people.h"
#include <string>

class Student : virtual public People {
public:
    // Default constructor
    Student() = default;
    // Destructor
    ~Student() = default;
    // Parameterized constructor
    Student(int num, const std::string& name, char gender, const std::string& birth, const std::string& id, int class_no);
    // Copy constructor
    Student(const Student& student);
    // Print information
    void Show();
    // Get class number
    int getClassNo() const;
    // Set class number
    void setClassNo(int class_no);

protected:
    int class_no;
};
