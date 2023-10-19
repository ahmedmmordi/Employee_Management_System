// Include necessary libraries and files for the program
#include <iostream> // Input and output operations.
#include "Validations.h" // Validity checks functions
#include "Options.h" // Employee and the main options in the program
#include "Others.h" // Initial employee data and the program's menu options


// Replace 'endl' with '\n' for faster formatting.
#define endl '\n'

// Import the 'std' namespace to use standard C++ functions and objects without prefixing them with 'std'.
using namespace std;

// Function to initialize the program with initial employee data
void given_data(vector<Employee>&Data);

// Function to display the program's menu options
void DisplayMenu ();


// The main function of the Employee Management System
int main() {

    // Create a vector to store employee data
    vector<Employee>My_Data;

    // Initialize the employee data
    given_data(My_Data);
    // You can use a file to read from and write into and save all the employee data.

    // Display the title of the Employee Management System
    cout << "\n\n\t\t\t  Employee Management System\n";

    // Prompt the user for their choice
    enter_choice:

    // Display a menu of available options
    DisplayMenu();

    // Get the user's input choice
    string input_choice;
    getline(cin, input_choice);

    // Check if the input is a valid integer
    while (!IsValidInteger(input_choice)) { // Verify the validity of the input_choice
        system("cls"); // Clear the console screen.
        cerr << "Please enter a valid choice.\n";
        // Display the menu again
        DisplayMenu();
        getline(cin, input_choice);
    }

    // Convert the input choice to an integer
    int choice = stoi(input_choice);

    // Check if the choice is within the valid range
    if (!(choice>=1 and choice<=6)) { // To check if the choice within the range 
        system("cls");
        cerr << "Kindly input a number within the range of 1 to 6.\n";
        goto enter_choice; // Go back to the menu and allow the user to re-enter their choice.
    }

    // Perform the selected action based on the user's choice
    switch (choice) {
        case 1:
            // Insert a new employee
            InsertEmployee(My_Data);
            system("pause");
            break;
        case 2:
            // Search for an employee
            SearchEmployee(My_Data);
            system("pause");
            break;
        case 3:
            // Update employee information
            UpdateEmployee(My_Data);
            system("pause");
            break;
        case 4:
            // Delete an employee
            DeleteEmployee(My_Data);
            system("pause");
            break;
        case 5:
            // Show all employees
            ShowAllData(My_Data);
            system("pause");
            break;
        case 6:
            // Exit the program
            cout << "\n Thank you for your initial interest. We are here whenever you are ready to return." << endl;
            system("pause");
            exit(0); // Exit the program successfully
    }

    return 0;
}