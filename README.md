# Employee Management System

This is the README file for the Employee Management System.
This program allows you to manage employee data, perform various operations on it, and view the information of all employees.
The code for this system is organized into four separate files: `Main.cpp`, `Validations.h`, `Options.h`, and `Others.h`. Each file serves a specific purpose in the program.

## Files Overview

### Main.cpp

The `Main.cpp` file contains the main function of the Employee Management System.
It orchestrates the program's flow, presents a menu of options to the user, and calls functions defined in other files to perform various operations based on the user's input.

Key functionalities in `Main.cpp` include:

- Initializing the program with initial employee data.
- Displaying the program's menu options.
- Taking user input for their choice.
- Validating user input and handling invalid inputs.
- Performing operations based on the user's choice, such as inserting, searching, updating, or deleting employee data.

### Validations.h

The `Validations.h` header file contains functions for validating different types of input data.
It is used throughout the program to ensure that user inputs meet certain criteria. This header file includes functions to check the validity of names, integers, salary values, department names, phone numbers, and addresses.

Key validation functions in `Validations.h` include:

- `IsValidName`: Checks if a string contains valid characters for a name.
- `IsValidInteger`: Checks if a string represents a valid integer.
- `IsValidSalary`: Checks if a string represents a valid salary (double).
- `IsValidDepartment`: Checks if a string contains valid characters for a department.
- `IsValidPhone`: Checks if a string contains valid characters for a phone number.
- `IsValidAddress`: Checks if a string contains valid characters for an address.

### Options.h

The `Options.h` header file is dedicated to core functions for manipulating employee data.
It defines the structure of an `Employee` and provides functions for inserting, searching, updating, and deleting employee records. Additionally, it offers a function to display all employee data stored in a provided vector.

Key functionalities in `Options.h` include:

- Defining the `Employee` structure, which includes properties such as ID, name, salary, address, phone, and department.
- `InsertEmployee`: Allows the user to insert a new employee's data, validating each input field.
- `SearchEmployee`: Enables the user to search for an employee by their ID and displays their information if found.
- `UpdateEmployee`: Permits the user to update an existing employee's information, including name, salary, address, phone, and department.
- `DeleteEmployee`: Allows the user to delete an employee record by their ID.
- `ShowAllData`: Displays all employee data if available in the provided vector.

### Others.h

The `Others.h` header file is a collection of two essential functions: `given_data` and `DisplayMenu`.
These functions are responsible for initializing the program with initial employee data and displaying the program's menu options, respectively.

Key functionalities in `Others.h` include:

- `given_data`: Initializes the program with initial employee data by creating three employee objects and adding them to the provided vector.
- `DisplayMenu`: Displays a menu of available options for the user to choose from.

These header files, clearly indicated as header files, work together to provide a functional and flexible Employee Management System.
Please follow the usage guidelines provided in this README to effectively utilize the program.


## How to Use the Program

1. **Download and Run the Program**:

   - Download the program's executable file (e.g., `EmployeeManagementSystem.exe`).
   - Run the program by double-clicking on the executable file or executing it from the command line.

2. **Interact with the Menu**:

   - The program will display a menu with several options.
   - Use the number keys (1 to 6) to select the desired option.
   - Follow the on-screen prompts to enter data or search for employees.

3. **Data Validation**:

   - The program performs data validation to ensure that you enter valid information.
   - If you receive an error message, follow the instructions to correct your input.

4. **Available Options**:

   - Insert a new employee (Option 1): Add a new employee's data, including name, salary, address, phone, and department.
   - Search for an employee (Option 2): Search for an employee by their ID.
   - Update employee information (Option 3): Update an existing employee's information.
   - Delete an employee (Option 4): Delete an employee by their ID.
   - Show all employees (Option 5): Display a list of all employees and their details.
   - Exit the program (Option 6): Exit the program.

5. **Sample Data**:

   - The program is initialized with three sample employee records. You can insert, search, update, and delete employee records as needed.

Feel free to use and customize this Employee Management System according to your needs.
If you encounter any issues or have further questions, please refer to the source code and this README file for guidance.

## Author
- [Ahmed Mordi](https://www.linkedin.com/in/ahmedmordi74/)
