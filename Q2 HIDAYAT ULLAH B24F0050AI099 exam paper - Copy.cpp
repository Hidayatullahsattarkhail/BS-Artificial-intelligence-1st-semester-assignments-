#include<iostream>
using namespace std;
int main (){
	cout<<"================================================"<<endl;
	cout<<"Write a program to print fractional of a given number "<<endl;
	cout<<"================================================"<<endl;	
	cout<<"          HIDAYAT ULLAH          "<<endl;
	cout<<"================================================"<<endl;
	

    long long factorial = 1; // Use long long to handle larger factorials
    int number;

    cout << "Enter a number : ";
    cin >> number;

  

    // Calculate factorial
   for (int i = 1; i <= number; ++i) {
    factorial *= i;
    }

    cout << "Factorial of " << number << " is " << factorial << endl;

    return 0; 
}