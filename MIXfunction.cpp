#include <iostream>
using namespace std;

int main() {

    int A[] ={3, 2, 1, 7, 6, 3};
    int B[] ={9, 3, 5, 6, 2, 8, 10};

    int M= 6, N= 7;
    int C[13];
    int evenIndex= 0, oddIndex= M + N - 1;

    // Adding even numbers from A
    for (int i= 0; i< M; i++) 
    {
        if (A[i] % 2 == 0)
       {
            C[evenIndex++] = A[i];
        }
    }

    // Adding even numbers from B
    for (int i= 0; i< N; i++)
   {
        if (B[i] % 2 == 0) 
       {
            C[evenIndex++]= B[i];
        }
    }

    // Adding odd numbers from B in reverse
    for (int i= N - 1; i>= 0; i--) 
   {
        if (B[i] % 2 != 0)
        {
            C[oddIndex--]= B[i];
        }
    }

    // Adding odd numbers from A in reverse
    for (int i= M - 1; i>= 0; i--) 
   {
        if (A[i] % 2 != 0) 
       {
            C[oddIndex--]= A[i];
        }
    }

    int CSize= evenIndex + (M + N - 1 - oddIndex);

    // Displaying the result
    cout<<"\nResultant array C: ";
    for (int i= 0; i< CSize; i++) 
    {
        cout<<C[i]<< " ";
    }
    cout<<endl;

    return 0;
}
