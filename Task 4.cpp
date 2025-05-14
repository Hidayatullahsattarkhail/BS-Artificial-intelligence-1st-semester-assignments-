#include <iostream>
#include <vector>
using namespace std;
long long fibonacciNth(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
long long a = 0, b = 1, fib = 0;
for (int i = 2; i <= n; i++) {
fib = a + b;
a = b;
b = fib;}
return b;}
void displayFirstNFibonacci(int n) {
long long a = 0, b = 1, fib = 0;
if (n >= 1) cout << a << " ";
if (n >= 2) cout << b << " ";
for (int i = 3; i <= n; i++) {
fib = a + b;
cout << fib << " ";
a = b;
b = fib;}
cout << endl;}
void displayFibonacciInRange(long long start, long long end) {
long long a = 0, b = 1, fib = 0;
if (a >= start && a <= end) cout << a << " ";
if (b >= start && b <= end) cout << b << " ";
while (true) {
    fib = a + b;
    if (fib > end) break;
    if (fib >= start) cout << fib << " ";
    a = b;
    b = fib;}
    cout << endl;}

void menu() {
    int choice;
    do {
        cout << "\nWhat do you want to do?\n";
        cout << "1. Display nth term in the Fibonacci sequence\n";
        cout << "2. Display first n Fibonacci numbers\n";
        cout << "3. Display Fibonacci numbers between a range [start, end]\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter the value of n: ";
                cin >> n;
                if (n < 0)
                    cout << "Invalid input! n must be non-negative." << endl;
                else
                    cout << "The " << n << "th term in the Fibonacci sequence is: " 
                         << fibonacciNth(n) << endl;
                break;
            }
            case 2: {
                int n;
                cout << "Enter the number of Fibonacci terms to display: ";
                cin >> n;
                if (n <= 0)
                    cout << "Invalid input! Number of terms must be positive." << endl;
                else {
                    cout << "The first " << n << " Fibonacci numbers are: ";
                    displayFirstNFibonacci(n);
                }
                break;
            }
            case 3: {
                long long start, end;
                cout << "Enter the range [start, end]: ";
                cin >> start >> end;
                if (start > end)
                    cout << "Invalid input! Start must be less than or equal to end." << endl;
                else {
                    cout << "The Fibonacci numbers in the range [" << start << ", " << end << "] are: ";
                    displayFibonacciInRange(start, end);
                }
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 4);
}

int main() {
    menu(); 
    return 0;
}