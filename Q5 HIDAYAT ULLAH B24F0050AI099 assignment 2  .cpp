#include <iostream>
#include <string>
using namespace std;

int main() {
    double length, width;
    string frameType, colorChoice, crownChoice;
    int numCrowns = 0;

    // Input: Picture dimensions
    cout << "Enter the length of the picture (in inches): ";
    cin >> length;
    cout << "Enter the width of the picture (in inches): ";
    cin >> width;

    // Input: Frame type
    cout << "Enter the type of frame (Regular/Fancy): ";
    cin >> frameType;

    // Input: Color choice
    cout << "Do you want to color the frame? (Yes/No): ";
    cin >> colorChoice;

    // Input: Crown choice
    cout << "Do you want crowns on the corners? (Yes/No): ";
    cin >> crownChoice;
    if (crownChoice == "Yes" || crownChoice == "yes") {
        cout << "How many crowns?: ";
        cin >> numCrowns;
    }

    // Calculate costs
    double perimeter = 2 * (length + width);
    double area = length * width;
    double frameCost = (frameType == "Fancy" || frameType == "fancy") ? 0.25 * perimeter : 0.15 * perimeter;
    double colorCost = (colorChoice == "Yes" || colorChoice == "yes") ? 0.10 * perimeter : 0.0;
    double cardboardCost = 0.02 * area;
    double glassCost = 0.07 * area;
    double crownCost = numCrowns * 0.35;

    // Total cost
    double totalCost = frameCost + colorCost + cardboardCost + glassCost + crownCost;

    // Output: Total cost
    cout << "The total cost of framing the picture is: $" << totalCost << endl;

    return 0;
}
