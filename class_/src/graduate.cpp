//
// Created by dell on 2022-5-12.
//

#include "graduate.h"

// Parameterized constructor implementation
Graduate::Graduate(int num, const std::string& name, char gender, const std::string& birth, const std::string& id, int class_no, const std::string& subject,
    Teacher& adviser) : Student(num, name, gender, birth, id, class_no), subject(subject), adviser(adviser) {
}

// Display graduate information
void Graduate::Show() {
    Student::Show();
    std::cout << ", Major: " << subject << ", Adviser: " << adviser.getName();
}

// Copy constructor implementation
Graduate::Graduate(Graduate &graduate) : Student(graduate) {
    subject = graduate.subject;
    adviser = graduate.adviser;
}

void Graduate::setSubject(const std::string& subject) {
    Graduate::subject = subject;
}

const std::string &Graduate::getSubject() const {
    return subject;
}

void Graduate::setAdviser(Teacher adviser) {
    Graduate::adviser = adviser;
}

const std::string &Graduate::getAdviserName() const {
    return adviser.getName();
}
