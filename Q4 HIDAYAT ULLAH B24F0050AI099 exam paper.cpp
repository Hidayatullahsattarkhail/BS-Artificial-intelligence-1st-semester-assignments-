#include<iostream>
using namespace std;
int main (){
	cout<<"================================================"<<endl;
	cout<<"Write a simple program that show this pattern "<<endl;
	cout<<"================================================"<<endl;	
	cout<<"          HIDAYAT ULLAH          "<<endl;
	cout<<"================================================"<<endl;

    int rows = 5; 

    // Print the upper part of the pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
        cout << "* ";
        }
        cout <<endl; 
    }

    // Print the lower part of the pattern
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
        cout << "* ";
        }
        cout <<endl; 
    }

    return 0;
}