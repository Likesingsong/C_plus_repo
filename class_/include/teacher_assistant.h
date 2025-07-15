//
// Created by dell on 2022-5-12.
//

#pragma once

#include "teacher.h"
#include "graduate.h"

class TA : public Teacher, public Graduate {
public:
    // Default constructor
    TA() = default;
    // Destructor
    ~TA() = default;
    // Parameterized constructor
    TA(int num, const std::string& name, char gender, const std::string& birth, const std::string &idcard, const std::string &principalship,
       const std::string &department, int class_no,  const std::string &subject, Teacher &adviser);
    // Copy constructor
    TA(TA &ta);
    // Print information
    void Show();
};
