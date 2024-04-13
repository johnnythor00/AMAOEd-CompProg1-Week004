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
#include <string>
#include <iomanip>


using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
/////////

class Payslip {
private:
    std::string name;
    char payGrade;
    double basicSalary;
    int overtimeHours;
    double overtimePay;
    double grossPay;
    double withholdingTax;
    double netPay;

public:
    // Constructor
    Payslip(const std::string& n, double salary, int otHours)
        : name(n), basicSalary(salary), overtimeHours(otHours) {}

    // Accessors
    std::string getName() const { return name; }
    char getPayGrade() const { return payGrade; }
    double getBasicSalary() const { return basicSalary; }
    int getOvertimeHours() const { return overtimeHours; }
    double getOvertimePay() const { return overtimePay; }
    double getGrossPay() const { return grossPay; }
    double getWithholdingTax() const { return withholdingTax; }
    double getNetPay() const { return netPay; }

    // Mutators
    void setName(const std::string& n) { name = n; }
    void setBasicSalary(double salary) { basicSalary = salary; }
    void setOvertimeHours(int otHours) { overtimeHours = otHours; }

    void determinePayGradeAndTaxRate() {
        if (basicSalary >= 50000) {
            payGrade = 'B';
            withholdingTax = grossPay * 0.30;
        } else {
            payGrade = 'A';
            if (basicSalary >= 40000) withholdingTax = grossPay * 0.25;
            else if (basicSalary >= 30000) withholdingTax = grossPay * 0.20;
            else if (basicSalary >= 20000) withholdingTax = grossPay * 0.15;
            else withholdingTax = grossPay * 0.10;
        }
    }

    void computePay() {
        overtimePay = overtimeHours * 0.01 * basicSalary;
        grossPay = basicSalary + overtimePay;
        withholdingTax = grossPay * 0.10;  // Default tax rate for payGrade A
        determinePayGradeAndTaxRate();
        double fixedDeductions = 500.00 + 200.00 + 100.00;
        netPay = grossPay - withholdingTax - fixedDeductions;
    }
};

int main() {
    std::string name;
    double basicSalary;
    int overtimeHours;

    // Input employee details with validation
    std::cout << "Enter Employee Name: ";
    std::getline(std::cin >> std::ws, name);

    while (true) {
        std::cout << "Enter Basic Salary (>= 10,000): Php ";
        std::cin >> basicSalary;
        if (basicSalary >= 10000) break;
        std::cout << "Invalid input! Basic Salary should be at least 10,000." << std::endl;
    }

    while (true) {
        std::cout << "Enter Number of OT Hours (>= 1): ";
        std::cin >> overtimeHours;
        if (overtimeHours >= 1) break;
        std::cout << "Invalid input! Minimum OT Hours is 1." << std::endl;
    }

    // Create Payslip object
    Payslip employee(name, basicSalary, overtimeHours);

    // Compute payslip
    employee.computePay();

    // Output payslip details
    std::cout << "\nEmployee Name       : " << employee.getName() << std::endl;
    std::cout << "Basic Salary        : Php " << std::fixed << std::setprecision(2) << std::setw(10) << std::right << employee.getBasicSalary() << std::endl;
    std::cout << "Pay Grade           : " << employee.getPayGrade() << std::endl;
    std::cout << "No. of OT Hours     : " << employee.getOvertimeHours() << std::endl;
    std::cout << "OT Pay              : Php " << employee.getOvertimePay() << std::endl;
    std::cout << "Gross Pay           : Php " << employee.getGrossPay() << std::endl;
    std::cout << "Withholding Tax     : Php " << employee.getWithholdingTax() << std::endl;
    std::cout << "Net Pay             : Php " << employee.getNetPay() << std::endl;

    return 0;
}














