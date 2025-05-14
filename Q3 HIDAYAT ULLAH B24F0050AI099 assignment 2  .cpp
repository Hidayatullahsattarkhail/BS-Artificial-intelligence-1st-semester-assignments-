#include <iostream>
using namespace std;

int main() {
    int accountBalance, dailyLimit, withdrawAmount;
    
    // Input: Account balance, daily limit, and withdrawal amount
    cout << "Enter your account balance: ";
    cin >> accountBalance;
    cout << "Enter your daily withdrawal limit: ";
    cin >> dailyLimit;
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawAmount;

    // Rule 1: Check if withdrawal amount exceeds account balance
    if (withdrawAmount > accountBalance) {
        cout << "Amount exceeds your account balance. Please try again." << endl;
        return 0;
    }

    // Rule 4: Check if withdrawal amount exceeds daily limit
    if (withdrawAmount > dailyLimit) {
        cout << "Amount exceeds your daily withdrawal limit. Please try again." << endl;
        return 0;
    }

    // Rule 5: Check if withdrawal amount is a multiple of 500
    if (withdrawAmount % 500 != 0) {
        cout << "Amount must be a multiple of Rs. 500. Please try again." << endl;
        return 0;
    }

    // Rule 3: Dispense minimum number of notes (with at least one Rs. 500 note)
    int notes5000 = withdrawAmount / 5000;
    withdrawAmount %= 5000;

    int notes1000 = withdrawAmount / 1000;
    withdrawAmount %= 1000;

    int notes500 = withdrawAmount / 500;

    // Rule 2: Ensure at least one Rs. 500 note is included
    if (notes500 == 0 && (notes1000 > 0 || notes5000 > 0)) {
        // Adjust Rs. 1000 or Rs. 5000 to include a Rs. 500 note
        if (notes1000 > 0) {
            notes1000--;
            notes500 += 2; // Replace 1 Rs. 1000 note with 2 Rs. 500 notes
        } else if (notes5000 > 0) {
            notes5000--;
            notes1000 += 4;
            notes500 += 2; // Replace 1 Rs. 5000 note with 4 Rs. 1000 and 2 Rs. 500 notes
        }
    }

    // Output: Display the number of notes dispensed
    cout << "You will receive:" << endl;
    if (notes5000 > 0) cout << notes5000 << " note(s) of Rs. 5000" << endl;
    if (notes1000 > 0) cout << notes1000 << " note(s) of Rs. 1000" << endl;
    if (notes500 > 0) cout << notes500 << " note(s) of Rs. 500" << endl;

    return 0;
}
