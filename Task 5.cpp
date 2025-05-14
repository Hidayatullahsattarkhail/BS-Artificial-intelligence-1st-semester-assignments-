#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <conio.h>
using namespace std;
int rollDice() {
    return rand() % 6 + 1;}

int playSingleMatch() {
    int player1Score = 0, player2Score = 0;
    int diceRoll;
    bool player1Turn = true; 

while (true) {
    if (player1Turn) {
        cout << "\nPlayer 1's turn: ";
        getch(); 
        diceRoll = rollDice();
        cout << diceRoll << endl;
    if (player1Score + diceRoll <= 20) {
        player1Score += diceRoll;}
    cout << "Player 1's total: " << player1Score << endl;
    if (player1Score == 20) {
        cout << "Player 1 wins this match!" << endl;
        return 1; }}
    else {
        cout << "\nPlayer 2's turn: ";
        getch(); 
        diceRoll = rollDice();
        cout << diceRoll << endl;
    if (player2Score + diceRoll <= 20) {
        player2Score += diceRoll;}
    cout << "Player 2's total: " << player2Score << endl;
    if (player2Score == 20) {
    cout << "Player 2 wins this match!" << endl;
        return 2; }
    }
  player1Turn = !player1Turn;}
}
void playBestOf5() {
    int player1Wins = 0, player2Wins = 0;

    cout << "Welcome to the Best-of-5 Snakes & Ladders Game!\n";
    cout << "The first player to win 3 matches will be the champion.\n";
    cout << "Press any key to roll the dice on your turn.\n";

for (int match = 1; match <= 5; match++) {
    cout << "\n--- Match " << match << " ---\n";
    int winner = playSingleMatch();
if (winner == 1) {
            player1Wins++;}
    else if (winner == 2) {
            player2Wins++;}
cout << "\nCurrent Score: Player 1: " << player1Wins << " | Player 2: " << player2Wins << endl;
if (player1Wins == 3) {
            cout << "\nPlayer 1 wins the Best-of-5 series!" << endl;
            break;}
    else if (player2Wins == 3) {
        cout << "\nPlayer 2 wins the Best-of-5 series!" << endl;
        break;}}
if (player1Wins != 3 && player2Wins != 3) {
        cout << "\nThe series ended in a tie!" << endl;}}
int main() {
srand(time(0)); 
char choice;
    do {
        playBestOf5();
        cout << "\nPress 'y' to play another Best-of-5 series or any other key to exit: ";
        cin >> choice;}
while (choice == 'y' || choice == 'Y');
cout << "Game terminated. Thanks for playing!" << endl;
return 0;
}