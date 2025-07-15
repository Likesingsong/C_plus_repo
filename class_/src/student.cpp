//
// Created by dell on 2022-5-12.
//

#include "student.h"

// Parameterized constructor definition
Student::Student(int num, const std::string& name, char gender, const std::string& birth, const std::string& id, int class_no) :
    People(num, name, gender, birth, id), class_no(class_no) {
}
// Copy constructor definition
Student::Student(const Student &student)  : People(student) {
    class_no = student.class_no;
}
// Member function Show definition
void Student::Show() {
    People::Show();
    std::cout << "\nClass Number: " << class_no;
}

int Student::getClassNo() const {
    return class_no;
}

void Student::setClassNo(int classNo) {
    Student::class_no = classNo;
}
