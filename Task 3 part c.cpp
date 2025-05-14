#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the size of the arrow: ";
    cin >> n;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n - i; j++) {
cout << " ";}
for (int j = 1; j <= 2 * i - 1; j++) {
    if (j % 2 != 0) {  
cout << "*";} 
else {  
cout << " ";}}
cout << endl;}
for (int i = 1; i <= n - 1; i++) {
for (int j = 1; j <= n - 1; j++) {
cout << " ";}
cout << "*" << endl;}
return 0;
}