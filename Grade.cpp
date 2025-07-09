#include <iostream>
using namespace std;

 main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    cout << "Your grade is: " << grade << ". ";
    
    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break;
        case 'E':
            cout << "You passed, but there's room for improvement." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    if (grade != 'F') {
        cout << "Congratulations! You are eligible for the next level!" << endl;
    } else {
        cout << "Please try again next time!" << endl;
    }

}