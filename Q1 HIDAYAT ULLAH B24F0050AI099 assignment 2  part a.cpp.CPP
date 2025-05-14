#include <iostream>
using namespace std;

int main() {
    double gallons, miles, mpg;

    // Input: Number of gallons and miles
    cout << "Enter the number of gallons the car can hold: ";
    cin >> gallons;
    cout << "Enter the number of miles it can be driven on a full tank: ";
    cin >> miles;

    // Process: Calculate miles per gallon
    if (gallons > 0) {
        mpg = miles / gallons;

        // Output: Display miles per gallon
        cout << "The car can drive " << mpg << " miles per gallon of gas." << endl;
    } else {
        cout << "Gallons must be greater than zero." << endl;
    }

    return 0;
}

