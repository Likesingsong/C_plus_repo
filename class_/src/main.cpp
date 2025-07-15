#include <iostream>
#include "people.h"
#include "student.h"
#include "teacher.h"
#include "graduate.h"
#include "teacher_assistant.h"

using namespace std;

int main() {
    People jack(1, "jack", 'M', "1999-11-01", "001");
    Student tony(2, "tome", 'M', "2000-05-16", "002", 2);
    Teacher alice(3, "alice", 'F', "1994-02-17", "003", "Class 3 Head Teacher", "Management Department");
    Teacher lily(4, "lily", 'F', "1995-12-28", "112", "Class 2 Head Teacher", "Academic Department");

    Graduate blue(5, "blue", 'M', "1999-09-10", "004", 2, "Computer Science", alice);
    TA ruby(6, "Li Hao", 'M', "1999-06-14", "005", "Class 3 TA", "Management Department", 3, "Computer Science", alice);
    cout << "People information:" << endl;
    jack.Show();
    cout << endl;
    cout << "Student information:" << endl;
    tony.Show();
    cout << endl;
    cout << "Teacher information:" << endl;
    alice.Show();
    cout << endl;
    /** Because of the virtual base class, only one copy is created in Teacher and Student.
    * In the test, the initialized People information only exists in the Teacher branch.
    * Therefore, the Graduate object 'blue' has empty values for number, name, gender, birth date, and ID.
    */
    // cout << "Graduate information:" << endl;
    // blue.Show();
    // cout << endl;
    cout << "TA information:" << endl;
    ruby.Show();
    cout << endl;
    /**
     * Test get and set functions using the TA object 'ruby'
     */
    // Modify TA object 'ruby' information (number: 7, name: "Li Hong", gender: F, birth date: "1998-10-14", ID: "123", class number: 2, principalship: "Class 2 TA", department: "Academic Department", major: "Software Engineering", adviser: lily)
    ruby.setNumber(7);
    ruby.setName("Li Hong");
    ruby.setGender('F');
    ruby.setBirth("1998-10-14");
    ruby.setId("123");
    ruby.setClassNo(2);
    ruby.setPrincipalship("Class 2 TA");
    ruby.setDepartment("Academic Department");
    ruby.setSubject("Software Engineering");
    ruby.setAdviser(lily);
    // Output modified 'ruby' information using get functions
    cout << "Output 'ruby' information using get functions:" << endl;
    cout << "Number: " << ruby.getNumber() << ", Name: " << ruby.getName() << ", Gender: " << ruby.getGender() << ", Birth Date: "
         << ruby.getBirth() << ", ID: " << ruby.getId() << "\nClass Number: " << ruby.getClassNo() << ", Principalship: "
         << ruby.getPrincipalship() << ", Department: "
         << ruby.getDepartment() << ", Major: " << ruby.getSubject() << ", Adviser: " << ruby.getAdviserName() << endl;
    return 0;
}
