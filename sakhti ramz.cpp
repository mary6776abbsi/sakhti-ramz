#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to calculate password strength
int calculatePasswordStrength(const string& password) {
    int strength = 0;

    // Check if password length is at least 6 characters
    if (password.length() >= 6) {
        strength += 20;
    }

    bool hasDigit = false;
    bool hasSpecialChar = false;
    bool hasUpperCase = false;
    bool hasLowerCase = false;

    for (char ch : password) {
        if (isdigit(ch)) {
            hasDigit = true;
        }
        if (ispunct(ch)) {
            hasSpecialChar = true;
        }
        if (isupper(ch)) {
            hasUpperCase = true;
        }
        if (islower(ch)) {
            hasLowerCase = true;
        }
    }

    if (hasDigit) {
        strength += 20;
    }
    if (hasSpecialChar) {
        strength += 20;
    }
    if (hasUpperCase) {
        strength += 20;
    }
    if (hasLowerCase) {
        strength += 20;
    }
    // Check if password length is greater than 6 characters
    if (password.length() > 6) {
        strength += 20;
    }

    return strength;
}

int main() {
    string password;

    cout << "Enter a password: ";
    cin >> password;

    int strength = calculatePasswordStrength(password);

    cout << "Password strength: " << strength << "%" << endl;

    return 0;
}
