/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
/////////


// Person class from the previous exercise

class Person {
private:
    std::string name;
    std::string address;
    char gender;
    int age;
    std::string occupation;

public:
    Person(const std::string& n, const std::string& addr, char gen, int a, const std::string& occ)
        : name(n), address(addr), gender(gen), age(a), occupation(occ) {}

    // Getters
    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }

    char getGender() const {
        return gender;
    }

    int getAge() const {
        return age;
    }

    std::string getOccupation() const {
        return occupation;
    }

    // Setters
    void setName(const std::string& n) {
        name = n;
    }

    void setAddress(const std::string& addr) {
        address = addr;
    }

    void setGender(char gen) {
        gender = gen;
    }

    void setAge(int a) {
        age = a;
    }

    void setOccupation(const std::string& occ) {
        occupation = occ;
    }

    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Occupation: " << occupation << std::endl;
    }
};

// Student class extending Person
class Student : public Person {
private:
    std::string academicProgram;
    int yearInCollege;
    std::string enrolledUniversity;

public:
    // Constructor
    Student(const std::string& n, const std::string& addr, char gen, int a, const std::string& occ,
            const std::string& program, int year, const std::string& university)
        : Person(n, addr, gen, a, occ), academicProgram(program), yearInCollege(year), enrolledUniversity(university) {}

    // Getters using accessors
    std::string getAcademicProgram() const {
        return academicProgram;
    }

    int getYearInCollege() const {
        return yearInCollege;
    }

    std::string getEnrolledUniversity() const {
        return enrolledUniversity;
    }

    // Setters using mutators
    void setAcademicProgram(const std::string& program) {
        academicProgram = program;
    }

    void setYearInCollege(int year) {
        yearInCollege = year;
    }

    void setEnrolledUniversity(const std::string& university) {
        enrolledUniversity = university;
    }

    // Display all properties
    void display() const {
        // Display properties from Person class
        Person::display();

        std::cout << "Academic Program: " << academicProgram << std::endl;
        std::cout << "Year in College: " << yearInCollege << std::endl;
        std::cout << "Enrolled University: " << enrolledUniversity << std::endl;
    }
};

int main() {
    // Instantiate a Student object
    Student myStudent("Alice", "456 College Ave", 'F', 20, "Student", "Computer Science", 2, "XYZ University");

    // Set values of Student properties using mutators
    myStudent.setAcademicProgram("Electrical Engineering");
    myStudent.setYearInCollege(3);
    myStudent.setEnrolledUniversity("ABC University");

    // Display all properties of the Student object using accessors
    std::cout << "Student information:" << std::endl;
    myStudent.display();

    return 0;
}











