#include <iostream> // File input and output operations.
#include <vector> // Using the vector container.
using namespace std;


// Replace 'endl' with '\n' for faster formatting.
#define endl '\n'

// Initialize the program with initial employee data
void given_data(vector<Employee>&Data) {
    Employee employee1, employee2, employee3; // Create employee objects

    // Initialize and add employee data to the vector
    employee1.Salary = 5000;
    employee1.Name = "Ahmed Mohamed Mordi";
    employee1.Address = "Cairo";
    employee1.Phone = "0566984";
    employee1.Department = "Software engineering";
    Data.push_back(employee1);

    employee2.Salary = 4000;
    employee2.Name = "Alex Manuel";
    employee2.Address = "Madrid";
    employee2.Phone = "9987463";
    employee2.Department = "Operations management";
    Data.push_back(employee2);

    employee3.Salary = 5500;
    employee3.Name = "Angela Robert";
    employee3.Address = "Berlin";
    employee3.Phone = "4487063";
    employee3.Department = "Finance";
    Data.push_back(employee3);
}

// Display the program's menu options
void DisplayMenu () {
    cout << "\n 1. Insert Employee" << endl;
    cout << "\n 2. Search Employee" << endl;
    cout << "\n 3. Update Employee" << endl;
    cout << "\n 4. Delete Employee" << endl;
    cout << "\n 5. Show All Employees" << endl;
    cout << "\n 6. Exit" << endl;
    cout << "\n Enter your choice : ";
}