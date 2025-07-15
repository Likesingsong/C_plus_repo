//
// Created by dell on 2022-5-12.
//

#include "teacher.h"

// Parameterized constructor definition
Teacher::Teacher(int num, const std::string& name, char gender, const std::string& birth, const std::string& id,
    const std::string& principalship, const std::string& department) :
    People(num, name, gender, birth, id), principalship(principalship), department(department) {
}
// Copy constructor definition
Teacher::Teacher(const Teacher& teacher) : People(teacher) {
    principalship = teacher.principalship;
    department = teacher.department;
}
// Member function Show definition
void Teacher::Show() {
    People::Show();
    std::cout << "\nPrincipalship: " << principalship << ", Department: " << department;
}

const std::string& Teacher::getPrincipalship() const {
    return principalship;
}

void Teacher::setPrincipalship(const std::string& principalship) {
    Teacher::principalship = principalship;
}

const std::string& Teacher::getDepartment() const {
    return department;
}

void Teacher::setDepartment(const std::string& department) {
    Teacher::department = department;
}
