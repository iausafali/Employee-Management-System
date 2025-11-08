// Create a class Employee that stores an employee’s name, ID, and salary. Use constant and static members to store fixed company details like the company name and count of employees. The class should have:
// •	A constructor initializer list to initialize data members.
// •	A copy constructor that performs a deep copy.
// •	A this pointer to distinguish between class members and parameters.
// •	Const functions to display data without modifying it.
// •	Static function to show total number of employees.
// •	Also, demonstrate object handling techniques by creating:
// •	Dynamic object allocation using pointers.
// •	Passing objects as function arguments.
// •	Returning an object from a function.
// Finally, show the difference between shallow and deep copy in your program by duplicating one employee’s record, modifying the original, and showing the difference in copies.
// Your program should be properly commented, efficient, and clearly reflect the use of constructors, copy constructor, constant/static members, and object handling.

#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string name;
    double id, salary;
    static int count;
    const string Cname = "Tech Solutions";

public:
    // A constructor initializer list to initialize data members.
    Employee(string name, double id, double salary) : name(name), id(id), salary(salary)
    {
        count++;
    }
    // A copy constructor that performs a deep copy.
    Employee(Employee &e)
    {
        cout << "Deep copy Constructor called" << endl;
        name = e.name;
        id = e.id;
        salary = e.salary;
        count++;
    }
    void set(string name, double id, double salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    // Const functions to display data without modifying it.
    const void get()
    {
        cout << "Company Name: " << Cname << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    // Static function to show total number of employees.
    static void show()
    {
        cout << "Total Employees: " << count << endl;
    }
    // Destructor
    ~Employee()
    {
        cout << "Object Destroyed!\n";
        count--;
    }
};
// Initialize static member
int Employee::count = 0;
int main()
{
    // Dynamic object allocation using pointers.
    string name;
    double id, salary;
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Salary: ";
    cin >> salary;

    // Creating dynamic object
    Employee *e1 = new Employee(name, id, salary);
    e1->get();
    Employee::show();
    delete e1;
    Employee e2("Ali", 002, 5000);
    e2.get();
    Employee::show();

    // Returning an object to copy constructor.
    Employee e3 = e2;
    e3.get();
    e2.set("Yousuf", 005, 9010);
    cout << "After modifying original Employee:" << endl;
    e2.get();
    cout << "Copied Employee remains unchanged:" << endl;
    e3.get();
    return 0;
}