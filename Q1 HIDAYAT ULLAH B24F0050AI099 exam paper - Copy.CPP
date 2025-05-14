#include<iostream>
using namespace std;
int main (){
	cout<<"==================================="<<endl;
	cout<<"A program to find Speed"<<endl;
	cout<<"==================================="<<endl;
	cout<<"      HIDAYAT ULLAH      "<<endl;
	cout<<"==================================="<<endl;
	
    double u, v, a, speed;   
	cout << "Enter the initial velocity (u): ";
    cin >> u;

    cout << "Enter the final velocity (v): ";
    cin >> v;

    cout << "Enter the acceleration (a): ";
    cin >> a;

    speed = ((u*u)-(v*v))/2*a;
    cout << "The calculated speed is: " << speed << endl;

    return 0;
}
	
	