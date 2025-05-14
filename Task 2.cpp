#include <iostream>
using namespace std;
long long factorial(int n) {
if (n < 0) return -1; 
if (n == 0) return 1; 
long long fact = 1;
for (int i = 1; i <= n; i++) {
fact *= i;
}
return fact;}
long long nPr(int n, int r) {
if (n < r || n < 0 || r < 0) return -1; 
return factorial(n) / factorial(n - r);}
long long nCr(int n, int r) {
if (n < r || n < 0 || r < 0) return -1; 
return factorial(n) / (factorial(n - r) * factorial(r));}
long long nCrUsingnPr(int n, int r) {
if (n < r || n < 0 || r < 0) return -1; 
return nPr(n, r) / factorial(r);}
void menu() {
int choice;
do {
cout << "\nMenu:\n";
cout << "1. Factorial of a number\n";
cout << "2. nPr (Permutations)\n";
cout << "3. nCr (Combinations using formula)\n";
cout << "4. nCr (Combinations using nPr)\n";
cout << "5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1: {
int num;
cout << "Enter a number to find its factorial: ";
cin >> num;
long long result = factorial(num);
if (result == -1)
cout << "Factorial is not defined for negative numbers." << endl;
else
cout << "Factorial of " << num << " is: " << result << endl;
break;}
case 2: {
int n, r;
cout << "Enter values for n and r (n >= r): ";
cin >> n >> r;
long long result = nPr(n, r);
if (result == -1)
cout << "Invalid input! Ensure n >= r and both are non-negative." << endl;
else
cout << "nPr(" << n << ", " << r << ") is: " << result << endl;
break;}
case 3: {
int n, r;
cout << "Enter values for n and r (n >= r): ";
cin >> n >> r;
long long result = nCr(n, r);
if (result == -1)
cout << "Invalid input! Ensure n >= r and both are non-negative." << endl;
else
cout << "nCr(" << n << ", " << r << ") using formula is: " << result << endl;
break;}
case 4: {
int n, r;
cout << "Enter values for n and r (n >= r): ";
cin >> n >> r;
long long result = nCrUsingnPr(n, r);
if (result == -1)
cout << "Invalid input! Ensure n >= r and both are non-negative." << endl;
else
cout << "nCr(" << n << ", " << r << ") using nPr is: " << result << endl;
break;}
case 5:
cout << "Exiting program." << endl;
break;
default:
cout << "Invalid choice! Please select a valid option." << endl;}}
while (choice != 5);}

int main() {
menu();
return 0;
}