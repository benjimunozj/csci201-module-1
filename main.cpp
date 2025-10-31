#include <iostream>
#include "studentType.h"


int main() {
    studentType s1;

    s1.setFirstName("Benjamin");
    s1.setLastName("Munoz");
    s1.setTestScore(85);
    s1.setProgScore(90);
    s1.setGPA(3.7);
    s1.setGrade();
    s1.print();

    std::cout << endl;

    studentType s2("Sam", "Sedziol", '*', 92, 95, 3.9);
    s2.setGrade();
    s2.print();

    cout << endl;

    cout << "Updating " << s1.getFirstName() << "'s scores!\n";
    s1.setTestScore(95);
    s1.setProgScore(100);
    s1.setGrade();
    s1.print();

    return 0;
}