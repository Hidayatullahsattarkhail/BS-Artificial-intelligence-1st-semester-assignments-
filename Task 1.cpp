#include <iostream>
using namespace std;
double bblsquareroot(double n, int iterations)
{double guess=1.0;
for(int i=0; i < iterations; i++ )
{ guess= (guess + n/guess)/2;}
return guess;
}
int main()
{
double N;
int iterations = 10;
while (true)
{cout<<"enter a positive number or -1 to exit :";
cin>>N;
if (N==-1)
{cout<<"program is terminated"<<endl;
break;}
if(N<0)
{cout<<"please enter a positive number";
continue;}
double result= bblsquareroot(N,iterations);
cout<<"the approximated square root of "<<N<<"is:"<<result;}
return 0;}