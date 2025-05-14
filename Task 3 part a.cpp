#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
for (int i = n; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
cout << j;}
for (int j = 1; j <= 2 * (n - i); j++) {
    cout << " ";}
for (int j = i; j >= 1; j--) {
    cout << j;}
cout << endl;}
for (int i = 2; i <= n; i++) {
for (int j = 1; j <= i; j++) {
    cout << j;}
for (int j = 1; j <= 2 * (n - i); j++) {
cout << " ";}
for (int j = i; j >= 1; j--) {
cout << j;}
cout << endl;}
return 0;
}