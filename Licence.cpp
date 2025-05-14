#include <iostream>
using namespace std;

int main() {
    // Correct answers
    char correctAnswers[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D',
                               'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    char studentAnswers[20];
    int correctCount = 0, incorrectCount = 0;
    int incorrectQuestions[20];
    int incorrectIndex = 0;

    // Input student answers
    cout << "\nEnter the student's answers for 20 questions (A/B/C/D):\n";
    for (int i = 0; i < 20; i++) {
        cout << "\nQuestion " << i + 1 << ": ";
        cin >> studentAnswers[i];
        if (studentAnswers[i] == correctAnswers[i]) {
            correctCount++;
        } else {
            incorrectQuestions[incorrectIndex++] = i + 1;
            incorrectCount++;
        }
    }

    // Display results
    cout << (correctCount >= 15 ? "\nThe student passed the exam.\n" : "\nThe student failed the exam.\n");
    cout << "\nCorrect answers: " << correctCount << endl;
    cout << "\nIncorrect answers: " << incorrectCount << endl;

    if (incorrectCount > 0) {
        cout << "Questions answered incorrectly: ";
        for (int i = 0; i < incorrectIndex; i++) {
            cout << incorrectQuestions[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
