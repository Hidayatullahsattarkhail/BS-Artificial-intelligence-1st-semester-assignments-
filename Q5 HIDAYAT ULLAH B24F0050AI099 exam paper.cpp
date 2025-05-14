#include<iostream>
using namespace std;
int main (){
	cout<<"==========================================================================="<<endl;
	cout<<"Write a program to print all odd number between 1 and 50 using do while loop"<<endl;
	cout<<"==========================================================================="<<endl;	
	cout<<"                 HIDAYAT ULLAH               "<<endl;
	cout<<"==========================================================================="<<endl;


    int number = 1; 

    cout << "Odd numbers between 1 and 50 are:\n";

    do {
    cout << number << " "; // Print the current odd number
        number += 2; // Move to the next odd number
    } while (number <= 50); // Continue until the number exceeds 50

    cout <<endl; // Print a new line after the output
    return 0; 
}