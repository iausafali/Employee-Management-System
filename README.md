# Employee Management System (C++ OOP Demonstration)

This project demonstrates the implementation of an **Employee Management System** in **C++**, focusing on **Object-Oriented Programming** (OOP) concepts like constructors, destructors, copy constructors, const/static members, and deep copy mechanisms.


## Features

- **Constructor Initializer List** for efficient member initialization  
- **Copy Constructor (Deep Copy)** implementation  
- **Use of `this` Pointer** to distinguish between members and parameters  
- **Const Functions** to display data safely  
- **Static Members** to store and display company-wide details  
- **Dynamic Object Creation** using pointers  
- **Object Handling:** Passing and returning objects  
- **Deep vs Shallow Copy** demonstration through record modification

## Concepts Covered

| Concept | Description |
|----------|--------------|
| Constructor | Initializes employee details using initializer list |
| Copy Constructor | Performs a **deep copy** of another employee |
| Destructor | Automatically decreases employee count |
| Static Members | Track total employee count across all objects |
| Const Functions | Prevent modification of class data |
| Dynamic Allocation | Creates and destroys employee objects using `new` and `delete` |
| Object Handling | Shows how to pass and return objects properly |


## Example Output
```
Enter Employee Name: John
Enter Employee ID: 101
Enter Employee Salary: 7000
Company Name: Tech Solutions
Name: John
ID: 101
Salary: 7000
Total Employees: 1
Object Destroyed!
Total Employees: 0
Company Name: Tech Solutions
Name: Ali
ID: 2
Salary: 5000
Total Employees: 1
Deep copy Constructor called
Company Name: Tech Solutions
Name: Ali
ID: 2
Salary: 5000
After modifying original Employee:
Company Name: Tech Solutions
Name: Yousuf
ID: 5
Salary: 9010
Copied Employee remains unchanged:
Company Name: Tech Solutions
Name: Ali
ID: 2
Salary: 5000
```

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Employee-Management.git
2. Navigate into the folder:
cd Employee-Management
3. Compile the code:
g++ Employee.cpp -o employee
4. Run the program:
./employee

## Author

Ausaf Ali
iausafaliofficial@gmail.com

GitHub Profile: https://github.com/iausafali
