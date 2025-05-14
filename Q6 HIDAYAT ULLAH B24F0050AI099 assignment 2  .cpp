#include <iostream>
using namespace std;

int main() {
    int n;

    // Step 1: Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 2: Remove duplicates by replacing them with -1
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1; // Mark duplicates with -1
            }
        }
    }

    // Output array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 3: Shift all -1s to the end
    int temp[n], index = 0;

    // Copy non -1 values to temp array
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            temp[index++] = arr[i];
        }
    }

    // Fill remaining slots with -1
    while (index < n) {
        temp[index++] = -1;
    }

    // Output array after shifting -1s
    cout << "Array after shifting -1s to the end: ";
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}
