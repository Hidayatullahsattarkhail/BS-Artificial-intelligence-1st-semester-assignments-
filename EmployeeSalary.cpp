#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long int emp_ID[7]={ 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	
	int hours[7];
	double pay_rate[7], wage[7];

	
	for ( int i=0; i<7; i++ )
    { 
        
	   	cout<<"\nEmployees ID: "<<emp_ID[i] << " ";
	   
	   do 
	   {
	   	 cout<<"\nHours worked by employee "  << emp_ID[i] << ": ";
	   	 cin>>hours[i];
	   	 if ( hours[i] < 0) { cout<<"\nWork Hours should be greater than 0. Invalid Input"; continue;		}
	   	
	   } while(hours[i]<0);
	   
	   do {
	   	    cout<<"pay rate per hour for employee " << emp_ID[i] << ":$ ";
	   	    cin>>pay_rate[i];
	   	    if ( pay_rate[i] < 6.00) { cout<<"\nPay Rate shouldn't exceed 6.00.\nInvalid Input!!"; continue;		}
	   	   
	   }while ( pay_rate[i] < 6.00);
	   
	   //calculating pay
	    wage[i] = hours[i] * pay_rate[i];
	    cout<<fixed<< setprecision(2);
		cout<<"\nWage for employee " << emp_ID[i] << " is: " << wage[i]<<endl;;
	}
	
	return 0;
	
}
