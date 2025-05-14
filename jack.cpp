#include <iostream>
using namespace std;

int main()
{
    int arr[] ={1, 6, 8, 9, 11, 12};

    int n =sizeof(arr) / sizeof(arr[0]); // size of array

    // Sorting the array
    for(int i= 0; i< n - 1; i++) {
        for(int j= 0; j< n - i - 1; j++) {
            if(arr[j]> arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Create two pointers to fill the array from both ends
    int left= 0, right= n - 1;

    // Rearrange the elements based on the odd/even position rule
    int resultArray[n];
    for(int i= 0; i< n; i++) {
        if(i % 2== 0) {
            resultArray[i]= arr[left];
            left++;
        }else {
            resultArray[i]= arr[right];
            right--;
        }
    }

    // Output the rearranged array
    for(int i =0; i < n; i++) {
        cout<<resultArray[i]<<" ";
    }
    cout<<endl;

    return 0;
}
