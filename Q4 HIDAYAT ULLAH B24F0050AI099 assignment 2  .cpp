#include <iostream>
#include <string>
using namespace std;

int main() {
    int amount;
    string words;

    // Arrays for numbers in words
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string hundred = "One Hundred";

    // Input: Get the amount
    cout << "Enter the amount (1-100): ";
    cin >> amount;

    // Validate input
    if (amount < 1 || amount > 100) {
        cout << "Invalid amount! Please enter a number between 1 and 100." << endl;
        return 0;
    }

    // Convert amount to words
    if (amount == 100) {
        words = hundred;
    } else if (amount >= 10 && amount < 20) {
        words = teens[amount - 10];
    } else {
        words = tens[amount / 10]; // Tens place
        if (amount % 10 != 0) {
            words += (words.empty() ? "" : " ") + ones[amount % 10]; // Ones place
        }
    }

    // Output: Display the amount in words
    cout << "The amount in words is: " << words << " ONLY." << endl;

    return 0;
}
