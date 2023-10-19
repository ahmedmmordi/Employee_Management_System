#include <iostream> // Input and output operations.
#include <string> // String manipulation.
#include <vector> // Using the vector container.
using namespace std;


// Replace 'endl' with '\n' for faster formatting.
#define endl '\n'

// Define a structure to represent Employee information
struct Employee {
    static int counter; // Static counter to keep track of Employee IDs (shared among all instances of the struct).
    int ID; // Unique Employee ID.
    double Salary; // Employee's Salary.
    string Name, Address, Phone, Department; // Employee's Name, Address, Phone, and Department.
    Employee() : ID(++counter) {} // Constructor to initialize the Employee with a unique ID.
};
int Employee::counter = 0; // Initialize and define the static counter for Employee IDs.


// Function to insert a new employee data.
void InsertEmployee(vector<Employee>&Data) {
    system("cls"); // Clear the console screen.
    Employee New_Employee; // Create a new Employee object for data entry

    // Prompt for and validate employee name
    cout << "Enter employee Name: ";
    string name;
    getline(cin, name);
    while (!IsValidName(name)) {
        system("cls");
        cerr << "Please enter a valid name.\n"; // Display an error message if the name is invalid.
        cout << "Enter employee Name: ";
        getline(cin, name);
    }
    New_Employee.Name = name; // Assign the validated name to New_Employee.Name

    // Prompt for and validate employee salary
    cout << "Enter employee Salary: ";
    string salary;
    getline(cin, salary);
    while (!IsValidSalary(salary)) {
        system("cls");
        cerr << "Please enter a valid salary.\n"; // Display an error message if the salary is invalid.
        cout << "Enter employee Salary: ";
        getline(cin, salary);
    }
    New_Employee.Salary = stod(salary); // Convert and assign the validated salary to New_Employee.Salary

    // Prompt for and validate employee address
    cout << "Enter employee Address: ";
    string address;
    getline(cin, address);
    while (!IsValidAddress(address)) {
        system("cls");
        cerr << "Please enter a valid address.\n"; // Display an error message if the address is invalid.
        cout << "Enter employee Address: ";
        getline(cin, address);
    }
    New_Employee.Address = address; // Assign the validated address to New_Employee.Address

    // Prompt for and validate employee phone number
    cout << "Enter employee Phone: ";
    string phone;
    getline(cin, phone);
    while (!IsValidPhone(phone)) {
        system("cls");
        cerr << "Please enter a valid phone.\n"; // Display an error message if the phone is invalid.
        cout << "Enter employee Phone: ";
        getline(cin, phone);
    }
    New_Employee.Phone = phone; // Assign the validated phone number to New_Employee.Phone

    // Prompt for and validate employee department
    cout << "Enter employee Department: ";
    string department;
    getline(cin, department);
    while (!IsValidDepartment(department)) {
        system("cls");
        cerr << "Please enter a valid department.\n"; // Display an error message if the department is invalid.
        cout << "Enter employee Department: ";
        getline(cin, department);
    }
    New_Employee.Department = department; // Assign the validated department to New_Employee.Department

    Data.push_back(New_Employee); // Add the new employee record to the vector
    cout << "The employee added successfully with ID number (" << New_Employee.ID << ")." << endl; // Confirmation message
}


// Function allows the user to search for an employee by their ID.
void SearchEmployee(vector<Employee>&Data) {
    system("cls"); // Clear the console screen.

    cout << "Enter the ID of the employee you want to search about: ";
    string entered_id;
    getline(cin, entered_id);

    // Check if the entered ID is a valid integer.
    while (!IsValidInteger(entered_id)) {
        system("cls");
        cerr << "Invalid ID, Please enter a valid one.\n";
        cout << "Enter the ID of the employee you want to delete: ";
        getline(cin, entered_id);
    }

    int ID = stoi(entered_id); // Convert the entered ID from a string to an integer.

    // Iterate through the list of employees to find a match.
    for (vector<Employee>::iterator record=Data.begin(); record!=Data.end(); ++record) {
        if (record->ID==ID) {
            // Display the employee's information.
            cout << "ID: " << record->ID << endl
                << "Name: " << record->Name << endl
                << "Salary: " << record->Salary << " $" << endl
                << "Address: " << record->Address << endl
                << "Phone: " << record->Phone << endl
                << "Department: " << record->Department << endl
                << "---------------------------------" << endl;
            cout << endl;
            cout << "Thanks for using our system. Have a great day!" << endl;
            return; // Exit the function once the employee is found.
        }
    }

    // Display a message if the employee with the specified ID is not found.
    cout << "Employee with ID (" << ID << ") not found." << endl;
    cout << endl;
    cout << "Thanks for using our system. Have a great day!" << endl;
}


// Function to update the data of a current employee by their ID.
void UpdateEmployee(vector<Employee>&Data) {
    system("cls"); // Clear the console screen.

    // Prompt the user to input the employee's ID for updating.
    cout << "Enter the ID of the employee you want to update: ";
    string updated_id;
    getline(cin, updated_id);
    while (!IsValidInteger(updated_id)) {
        system("cls");
        cerr << "Invalid ID, Please enter a valid one.\n"; // Display an error message if the entered ID is invalid.
        cout << "Enter the ID of the employee you want to update: ";
        getline(cin, updated_id);
    }

    int ID = stoi(updated_id); // Convert the valid ID from string to an integer.

    // Iterate through the employee records to find the one with the matching ID.
    for (vector<Employee>::iterator record=Data.begin(); record!=Data.end(); ++record) {
        if (record->ID==ID) { // Check if there is an Employee with a matching ID.

            // Prompt for and validate the new employee's name for updating.
            cout << "Enter the new Name: ";
            string name;
            getline(cin, name);
            while (!IsValidName(name)) {
                system("cls"); // Clear the screen
                cerr << "Please enter a valid name.\n"; // Display an error message if the name is invalid.
                cout << "Enter the new Name: ";
                getline(cin, name);
            }
            record->Name = name; // Update the employee's name with the new value.

            // Prompt for and validate the new employee's salary for updating.
            cout << "Enter the new Salary: ";
            string salary;
            getline(cin, salary);
            while (!IsValidSalary(salary)) {
                system("cls");
                cerr << "Please enter a valid salary.\n"; // Display an error message if the salary is invalid.
                cout << "Enter the new Salary: ";
                getline(cin, salary);
            }
            record->Salary = stod(salary); // Update the employee's salary with the new value.

            // Prompt for and validate the new employee's address for updating.
            cout << "Enter the new Address: ";
            string address;
            getline(cin, address);
            while (!IsValidAddress(address)) {
                system("cls");
                cerr << "Please enter a valid address.\n";
                cout << "Enter the new Address : ";
                getline(cin, address);
            }
            record->Address = address; // Update the employee's address with the new value.

            // Prompt for and validate the new employee's phone for updating.
            cout << "Enter the new Phone: ";
            string phone;
            getline(cin, phone);
            while (!IsValidPhone(phone)) {
                system("cls");
                cerr << "Please enter a valid phone.\n"; // Display an error message if the phone is invalid.
                cout << "Enter the new Phone: ";
                getline(cin, phone);
            }
            record->Phone = phone; // Update the employee's phone number with the new value.

            // Prompt for and validate the new employee's department for updating.
            cout << "Enter the new Department: ";
            string department;
            getline(cin, department);
            while (!IsValidDepartment(department)) {
                system("cls");
                cerr << "Please enter a valid department.\n"; // Display an error message if the department is invalid.
                cout << "Enter the new Department: ";
                getline(cin, department);
            }
            record->Department = department; // Update the employee's department with the new value.

            // Notify the user that the employee's data has been successfully updated.
            cout << "Employee data with ID (" << ID << ") updated successfully." << endl;
            cout << endl;
            cout << "Thanks for using our system. Have a great day!" << endl;
            return;
        }
    }

    // Notify the user that the employee with the given ID was not found in the records.
    cout << "Employee with ID (" << ID << ") not found." << endl;
    cout << endl;
    cout << "Thanks for using our system. Have a great day!" << endl;
}


// Function to delete an employee's record from the provided vector by their ID.
void DeleteEmployee(vector<Employee>&Data) {
    system("cls"); // Clear the console screen.

    // Prompt the user to enter the ID of the employee to delete.
    cout << "Enter the ID of the employee you want to delete: ";
    string deleted_id;
    getline(cin, deleted_id);

    // Validate the entered ID to ensure it is a valid integer.
    while (!IsValidInteger(deleted_id)) {
        system("cls");
        // Display error message for invalid input.
        cerr << "Invalid ID, Please enter a valid one.\n";
        cout << "Enter the ID of the employee you want to delete: ";
        getline(cin, deleted_id);
    }

    // Convert the validated string ID into an integer.
    int ID = stoi(deleted_id);

    // Iterate through the vector to find the employee with the specified ID.
    for (vector<Employee>::iterator record=Data.begin(); record!=Data.end(); ++record) {
        if (record->ID==ID) {
            // If found, erase the employee's record from the vector.
            Data.erase(record);
            cout << "Employee with ID (" << ID << ") deleted successfully." << endl;
            cout << endl;
            cout << "Thanks for using our system. Have a great day!" << endl;
            return;
        }
    }

    // If the specified ID was not found in the vector.
    cout << "Employee with ID (" << ID << ") not found." << endl;
    cout << endl;
    cout << "Thanks for using our system. Have a great day!" << endl;
}


// Function to display all employee data stored in the provided vector, if available.
void ShowAllData(vector<Employee>&Data) {
    system("cls"); // Clear the console screen.

    // Check if the vector is empty. If it is, display a message and return.
    if (Data.empty()) {
        cout << "There are no employees to show." << endl;
        cout << endl;
        cout << "Thanks for using our system. Have a great day!" << endl;
        return;
    }

    // Display the list of employees and their details.
    cout << "List of employees:" << endl;
    for (vector<Employee>::iterator record=Data.begin(); record!=Data.end(); ++record) {
        cout << "ID: " << record->ID << endl
            << "Name: " << record->Name << endl
            << "Salary: " << record->Salary << " $" << endl
            << "Address: " << record->Address << endl
            << "Phone: " << record->Phone << endl
            << "Department: " << record->Department << endl
            << "---------------------------------" << endl;
    }

    // Provide a closing message to the user.
    cout << endl;
    cout << "Thanks for using our system. Have a great day!" << endl;
}