//
// Created by dell on 2022-5-12.
//

#include "teacher_assistant.h"

// Parameterized constructor definition
TA::TA(int num, const std::string& name, char gender,
    const std::string& birth, const std::string& idcard,
    const std::string& principalship, const std::string& department,
    int class_no, const std::string& subject, Teacher& adviser) :
    People(num, name, gender, birth, idcard),
    Teacher(num, name, gender, birth, idcard, principalship, department),
    Student(num, name, gender, birth, idcard, class_no),
    Graduate(num, name, gender, birth, idcard, class_no, subject, adviser) {
}
// Copy constructor definition
TA::TA(TA& ta) :Graduate(ta) {
    principalship = ta.principalship;
    department = ta.department;
}
// Member function Show definition
void TA::Show() {
    Teacher::Show();
    std::cout << ", Class Number: " << class_no << ", Major: " << subject << ", Adviser: " << adviser.getName();
}
