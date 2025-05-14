#include<iostream>
using namespace std;
int main (){
	cout<<"===================================================================================="<<endl;
	cout<<"Write a  program that take input from user and then prints its multiplication table. "<<endl;
	cout<<"====================================================================================="<<endl;	
	cout<<"                       HIDAYAT ULLAH                               "<<endl;
	cout<<"====================================================================================="<<endl;
	

    int number;

    // Prompt the user for input
    cout << "Enter an integer to print its multiplication table: ";
    cin >> number;

    // Print the multiplication table
    cout << "Multiplication table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
    cout << number << " x " << i << " = " << number * i <<endl;
    }

    return 0;
}
	