#include <iostream>
using namespace std;

int main() {
    const double PRICE = 99.0;
    int units;
    double discount = 0.0, totalCost;

    // Input: Number of units sold
    cout << "Enter the number of units sold: ";
    cin >> units;

    // Input Validation
    if (units <= 0) {
        cout << "Number of units must be greater than zero." << endl;
        return 1;
    }

    // Process: Determine discount rate
    if (units >= 10 && units <= 19) {
        discount = 0.20;
    } else if (units >= 20 && units <= 49) {
        discount = 0.30;
    } else if (units >= 50 && units <= 99) {
        discount = 0.40;
    } else if (units >= 100) {
        discount = 0.50;
    }

    // Calculate total cost
    totalCost = units * PRICE * (1 - discount);

    // Output: Display the total cost
    cout << "The total cost of the purchase is: $" << totalCost << endl;

    return 0;
}