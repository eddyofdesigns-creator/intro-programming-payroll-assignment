
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    // Variables
    int numberOfEmployees;
    double totalPayroll = 0.0;

    // Performance counters
    int excellentCount = 0;
    int goodCount = 0;
    int satisfactoryCount = 0;
    int improvementCount = 0;

    // Displaying the heading of the payroll system.
    cout << "****************************************************" << endl;
    cout << "              GAUTENG CITY COLLEGE" << endl;
    cout << "                 PAYROLL SYSTEM" << endl;
    cout << "****************************************************" << endl;

    // Asking how many employees must be processed.
    cout << "Enter the number of employees: ";

    while (!(cin >> numberOfEmployees) || numberOfEmployees <= 0)
    {
        cout << "Invalid input. Enter a number greater than zero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Displaying money values.
    cout << fixed << setprecision(2);

    // Process each employee.
    for (int i = 1; i <= numberOfEmployees; i++)
    {
        // Employee information.
        string employeeID;
        string employeeName;
        string departmentName;
        string performanceCategory;

        // Salary and bonuses.
        double basicSalary;
        double performanceBonus;
        double serviceBonus;
        double departmentAllowance;
        double totalPay;
        double bonusRate;

        // Employee details.
        int rating;
        int yearsOfService;
        int departmentChoice;

        // Employee heading.
        cout << endl;
        cout << "****************************************************" << endl;
        cout << "                  EMPLOYEE " << i << endl;
        cout << "****************************************************" << endl;

        // Employee ID validation.
        cout << "Enter employee ID: ";
        cin >> ws;
        getline(cin, employeeID);

        while (employeeID.find_first_not_of(" \t") == string::npos)
        {
            cout << "Employee ID cannot be empty. Enter again: ";
            getline(cin, employeeID);
        }

        // Employee name validation.
        cout << "Enter employee name: ";
        getline(cin, employeeName);

        while (employeeName.find_first_not_of(" \t") == string::npos)
        {
            cout << "Name cannot be empty. Enter again: ";
            getline(cin, employeeName);
        }

        // Displaying work departments.
        cout << endl;
        cout << "------------------ WORK DEPARTMENTS ----------------" << endl;
        cout << "1. Engineering" << endl;
        cout << "2. Management & Humanities" << endl;
        cout << "3. Information Technology" << endl;
        cout << "4. Media Studies" << endl;
        cout << "5. Safety & Security" << endl;
        cout << "6. Professional Studies" << endl;
        cout << "7. Transport & Logistics" << endl;
        cout << "8. Environmental Health" << endl;
        cout << "----------------------------------------------------" << endl;

        // Selecting a work department.
        cout << "Select work department number: ";

        while (!(cin >> departmentChoice) ||
               departmentChoice < 1 || departmentChoice > 8)
        {
            cout << "Invalid choice. Enter a number from 1 to 8: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Assigning the department and its allowance.
        switch (departmentChoice)
        {
            case 1:
                departmentName = "Engineering";
                departmentAllowance = 500.00;
                break;

            case 2:
                departmentName = "Management & Humanities";
                departmentAllowance = 700.00;
                break;

            case 3:
                departmentName = "Information Technology";
                departmentAllowance = 600.00;
                break;

            case 4:
                departmentName = "Media Studies";
                departmentAllowance = 450.00;
                break;

            case 5:
                departmentName = "Safety & Security";
                departmentAllowance = 400.00;
                break;

            case 6:
                departmentName = "Professional Studies";
                departmentAllowance = 350.00;
                break;

            case 7:
                departmentName = "Transport & Logistics";
                departmentAllowance = 550.00;
                break;

            case 8:
                departmentName = "Environmental Health";
                departmentAllowance = 400.00;
                break;

        }

        // Basic salary validation.
        cout << "Enter basic salary (R): ";

        while (!(cin >> basicSalary) || basicSalary <= 0)
        {
            cout << "Invalid salary. Enter an amount greater than zero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Performance rating validation.
        cout << "Enter performance rating (0-100): ";

        while (!(cin >> rating) || rating < 0 || rating > 100)
        {
            cout << "Invalid rating. Enter a number from 0 to 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Years of service validation.
        cout << "Enter completed years of service: ";

        while (!(cin >> yearsOfService) || yearsOfService < 0)
        {
            cout << "Invalid input. Enter zero or a positive whole number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Determining the performance category and bonus rate.
        if (rating >= 90)
        {
            performanceCategory = "Excellent";
            bonusRate = 0.15;
            excellentCount++;
        }
        else if (rating >= 75)
        {
            performanceCategory = "Good";
            bonusRate = 0.10;
            goodCount++;
        }
        else if (rating >= 50)
        {
            performanceCategory = "Satisfactory";
            bonusRate = 0.05;
            satisfactoryCount++;
        }
        else
        {
            performanceCategory = "Needs Improvement";
            bonusRate = 0.00;
            improvementCount++;
        }

        // Calculating the performance bonus.
        performanceBonus = basicSalary * bonusRate;

        // Calculating the service bonus.
        if (yearsOfService <= 1)
        {
            serviceBonus = 0.00;
        }
        else if (yearsOfService <= 4)
        {
            serviceBonus = 500.00;
        }
        else if (yearsOfService <= 9)
        {
            serviceBonus = 1000.00;
        }
        else
        {
            serviceBonus = 1500.00;
        }

        // Calculating total employee pay.
        totalPay = basicSalary + performanceBonus
                   + serviceBonus + departmentAllowance;

        // Updating total payroll.
        totalPayroll += totalPay;

        // Displaying the payroll slip.
        cout << endl;
        cout << "****************************************************" << endl;
        cout << "                    PAYROLL SLIP" << endl;
        cout << "****************************************************" << endl;

        cout << endl;
        cout << "EMPLOYEE DETAILS" << endl;
        cout << "----------------------------------------------------" << endl;

        cout << left << setw(28) << "Employee ID:"
             << employeeID << endl;

        cout << left << setw(28) << "Employee Name:"
             << employeeName << endl;

        cout << left << setw(28) << "Work Department:"
             << departmentName << endl;

        cout << endl;
        cout << "SALARY AND BONUSES" << endl;
        cout << "----------------------------------------------------" << endl;

        cout << left << setw(28) << "Basic Salary:"
             << right << "R " << setw(12) << basicSalary << endl;

        cout << left << setw(28) << "Performance Rating:"
             << right << setw(14) << rating << "/100" << endl;

        cout << left << setw(28) << "Performance Category:"
             << right << performanceCategory << endl;

        cout << left << setw(28) << "Performance Bonus:"
             << right << "R " << setw(12) << performanceBonus << endl;

        cout << left << setw(28) << "Years of Service:"
             << right << setw(14) << yearsOfService << endl;

        cout << left << setw(28) << "Service Bonus:"
             << right << "R " << setw(12) << serviceBonus << endl;

        cout << left << setw(28) << "Department Allowance:"
             << right << "R " << setw(12) << departmentAllowance << endl;

        cout << "----------------------------------------------------" << endl;

        cout << left << setw(28) << "TOTAL PAY:"
             << right << "R " << setw(12) << totalPay << endl;

        cout << "****************************************************" << endl;
        cout << "                 END OF PAYROLL SLIP" << endl;
        cout << "****************************************************" << endl;
    }

    // Displaying the final payroll report.
    cout << endl;
    cout << "****************************************************" << endl;
    cout << "                 FINAL PAYROLL REPORT" << endl;
    cout << "****************************************************" << endl;

    cout << left << setw(30) << "Employees Processed:"
         << right << numberOfEmployees << endl;

    cout << left << setw(30) << "Total Payroll Expenditure:"
         << right << "R " << totalPayroll << endl;

    // Performance category summary.
    cout << endl;
    cout << "PERFORMANCE CATEGORY SUMMARY" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << left << setw(30) << "Excellent:"
         << right << excellentCount << endl;

    cout << left << setw(30) << "Good:"
         << right << goodCount << endl;

    cout << left << setw(30) << "Satisfactory:"
         << right << satisfactoryCount << endl;

    cout << left << setw(30) << "Needs Improvement:"
         << right << improvementCount << endl;

    cout << "****************************************************" << endl;
    cout << "             PAYROLL PROCESSING COMPLETED" << endl;
    cout << "****************************************************" << endl;

    return 0;
}
