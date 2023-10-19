#include <iostream> // Input and output operations.
#include <string> // String manipulation.
using namespace std;


// Functions for Validity Checks

// Check if a string contains valid characters for a name
bool IsValidName(string&name) {
    for (char letter : name) {
        if (!isalpha(letter) and !isspace(letter)) {
            return false; // Return false for non-alphabetical characters and non-spaces
        }
    }
    return true; // Return true if the string is valid for a name
}

// Check if a string represents a valid integer
bool IsValidInteger(string&choice) {
    for (char digit : choice) {
        if (!isdigit(digit)) {
            return false; // Return false if the string contains non-digit characters
        }
    }
    return true; // Return true if the string is a valid integer
}

// Check if a string represents a valid salary (double)
bool IsValidSalary(string&salary) {
    int count_dots = 0;
    for (char digit : salary) {
        if (!isdigit(digit) and digit!='.') {
            return false; // Return false for non-digit and non-dot characters
        }
        if (digit=='.') {
            ++count_dots;
        }
    }
    return (count_dots>1 ? false : true); // Return false for invalid double (e.g., 3500.50.5), true for valid double
}

// Check if a string contains valid characters for a department
bool IsValidDepartment(string&department) {
    for (char element : department) {
        if (!isalpha(element) and !isspace(element)) {
            return false; // Return false for non-alphabetical characters and non-spaces
        }
    }
    return true; // Return true if the string is valid for a department
}

// Check if a string contains valid characters for a phone number
bool IsValidPhone(string&phone) {
    for (char digit : phone) {
        if (!isdigit(digit)) {
            return false; // Return false if the string contains non-digit characters
        }
    }
    return true; // Return true if the input is a valid phone number
}

// Check if a string contains valid characters for an address
bool IsValidAddress(string&address) {
    for (char element : address) {
        if (!isalpha(element) and !isspace(element) and !isdigit(element) and element!='.' and element!=',') {
            return false; // Return false for characters that are not letters, spaces, digits, periods, or commas
        }
    }
    return true; // Return true if the string is valid for an address
}