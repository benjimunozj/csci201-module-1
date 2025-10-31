#include <iostream>
#include "studentType.h"

studentType::studentType(string fn, string ln, char grade, int tScore, int prgScore, double gp) {
    firstName = fn;
    lastName = ln;
    courseGrade = grade;
    testScore = tScore;
    programmingScore = prgScore;
    GPA = gp;
}

void studentType::setFirstName(string fn) {
    firstName = fn;
}
void studentType::setLastName(string ln) {
    lastName = ln;
}
void studentType::setTestScore(int tScore) {
    testScore = tScore;
}
void studentType::setProgScore(int prgScore) {
    programmingScore = prgScore;
}
void studentType::setGPA(double gp) {
    GPA = gp;
}

void studentType::setGrade() {
    int avg = (testScore + programmingScore) / 2;
    if (avg >= 90) {
        courseGrade = 'A';
    }
    else if (avg >= 80) {
        courseGrade = 'B';
    }
    else if (avg >= 70) {
        courseGrade = 'C';
    }
    else if (avg >= 60) {
        courseGrade = 'D';
    }
    else {
        courseGrade = 'F';
    }
}

void studentType::print() const {
    std::cout << "Student: " << firstName << " " << lastName << endl;
    std::cout << "Test Score: " << testScore << endl;
    std::cout << "Programming Score: " << programmingScore << endl;
    std::cout << "GPA: " << GPA << endl;
    std::cout << "Course Grade: " << courseGrade << endl;
}