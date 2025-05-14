#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Hardcode the array
    const int N = 10;
    int arr[N] = {9, 4, 54, 23, 54, -23, 0, 54, 5, 8};

    // Step 2: Ask user to input a number
    int target;
    cout << "Enter a number: ";
    cin >> target;

    // Step 3: Find triplets whose sum equals the target
    bool found = false;
    vector<vector<int>> triplets; // To store all triplets

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    found = true;
                    triplets.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    // Step 4: Output the result
    if (found) {
        cout << "Triplets found:\n";
        int count = 1;
        for (const auto& triplet : triplets) {
            cout << count << ". " << triplet[0] << ", " << triplet[1] << ", and " << triplet[2] << endl;
            count++;
        }
    } else {
        cout << "No triplets found.\n";
    }

    return 0;
}
