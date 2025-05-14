#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the size of the hexagon (number of rows for the upper half): ";
cin >> n;
int num = 4; 
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
    cout << " ";}
for (int j = 0; j < n + 2 * i; j++) {
    cout << num;}
    cout << endl;}
for (int i = n - 2; i >= 0; i--) {
for (int j = 0; j < n - i - 1; j++) {
    cout << " ";}
for (int j = 0; j < n + 2 * i; j++) {
    cout << num;}
    cout << endl;}
return 0;
}