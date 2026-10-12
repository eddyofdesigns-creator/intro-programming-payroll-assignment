Employee Payroll System in C++

## 1. Project Description

This project is a C++ payroll system developed for Introduction to Programming — Practical Assignment 1 at Gauteng City College.

The purpose of the program is to calculate employee pay. It asks for employee details, calculates bonuses and department allowances, and displays a payroll slip for each employee. At the end, it displays a summary of the total payroll and employee performance categories.

## 2. How the Program Works
-The program asks the user how many employees must be processed. It then collects each employee's ID, name, department, basic salary, performance rating, and years of service.
-It calculates the employee's performance bonus, service bonus, department allowance, and total pay.
-The program also checks for invalid input, such as a negative salary or a performance rating outside the range of 0 to 100.

## 3. Bonus Rules

### Performance Bonus
The performance bonus depends on the employee's performance rating.
- Excellent (90–100): The employee receives 15% of the basic salary.
- Good (75–89): The employee receives 10% of the basic salary.
- Satisfactory (50–74): The employee receives 5% of the basic salary.
- Needs Improvement (0–49): The employee receives no performance bonus.

### Years-of-Service Bonus
The service bonus depends on the number of completed years the employee has worked.
- 0–1 years: R0
- 2–4 years: R500
- 5–9 years: R1,000
- 10 years or more: R1,500

### Department Allowances
Each department receives a fixed allowance:
- Engineering: R500
- Management & Humanities: R700
- Information Technology: R600
- Media Studies: R450
- Safety & Security: R400
- Professional Studies: R350
- Transport & Logistics: R550
- Environmental Health: R400

### Total Pay Calculation

The program calculates the employee's total pay using the following formula:

**Total Pay = Basic Salary + Performance Bonus + Service Bonus + Department Allowance**

## 4. C++ Concepts Used
- **Variables and data types:** Store employee details, salaries, bonuses, allowances, and totals.
- **if / else if / else:** Determine performance categories and service bonuses.
- **switch statement:** Select the employee's department and its allowance.
- **for loop:** Process each employee according to the number entered by the user.
- **Input validation:** Reject invalid entries and ask the user to enter valid information again.
- **Output formatting:** Display money values to two decimal places and organise the payroll slip clearly.

## 5. Technologies Used
- C++
- Code::Blocks
- GCC/G++ compiler
- GitHub

## 6. How to Compile and Run
Make sure that a C++ compiler is installed.

## 7. Example Input and Output

The following is an example of the information entered for one employee.

**Example input**

```text
Number of employees: 1
Employee ID: EMP001
Employee name: Eddy Jonasi
Department: 1 (Engineering)
Basic salary: 10000
Performance rating: 95
Years of service: 5
```

**Expected calculation**

- Basic salary: R10,000.00
- Performance bonus (15%): R1,500.00
- Service bonus (5 years): R1,000.00
- Engineering allowance: R500.00
- **Total pay: R13,000.00**

The program also displays the employee's details, performance category, payroll slip, total payroll expenditure, and performance category summary.

## 8. Student Information
- **Student name:** Edward Tafadzwa Jichichi
- **Id Number:** GN618872
- **Institution:** Gauteng City College
- **Faculty:** Faculty of Information Technology
- **Module:** Introduction to Programming (C++)
- **Level:** First Year NQF 4
- **Assignment:** Practical Assignment 1 — C++ Control Structures & Program Design
- **Lecturer:** Mr Owami
- **Date of Submission:** 23 October 2026
- **Due date:** 23 October 2026
- **GitHub repository:** https://github.com/eddyofdesigns-creator/intro-programming-payroll-assignment
- **LinkedIn profile:** Add your LinkedIn profile URL here.

## 9. References

1. Mr Owami. (2026). *Introduction to Programming (C++) — Class Notes and Assignment Brief.* Gauteng City College.
2. YouTube. (2026). *C++ For Loops Tutorial.* Available at: https://www.youtube.com/watch?v=gP22X_ykkxI
3. YouTube. (2026). *C++ cin Input Tutorial.* Available at: https://www.youtube.com/watch?v=0gKT5ppfbn0
4. YouTube. (2026). *C++ cin and cout Tutorial.* Available at: https://www.youtube.com/shorts/3I2pp1fUNSo
