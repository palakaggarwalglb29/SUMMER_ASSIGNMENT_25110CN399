#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Structure to group a question, its options, and the correct answer
struct QuizQuestion {
    string text;
    string options[4];
    char correctAnswer;
};

int main() {
    // Array containing 3 sample questions
    QuizQuestion quiz[] = {
        {
            "What is the successor of C language?",
            {"A. Python", "B. Java", "C. C++", "D. Ruby"},
            'C'
        },
        {
            "Which data type is used to store text in C++?",
            {"A. int", "B. string", "C. float", "D. char"},
            'B'
        },
        {
            "Which of the following is used for a newline in C++?",
            {"A. \\n", "B. \\t", "C. \\a", "D. \\s"},
            'A'
        }
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;
    char userGuess;

    cout << "=========================================" << endl;
    cout << "      WELCOME TO THE EASY C++ QUIZ!      " << endl;
    cout << "=========================================" << endl;
    cout << "Instructions: Type A, B, C, or D for your answer.\n" << endl;

    // Loop through each question
    for (int i = 0; i < totalQuestions; i++) {
        cout << "Question " << (i + 1) << ": " << quiz[i].text << endl;
        
        // Loop to print the 4 choices
        for (int j = 0; j < 4; j++) {
            cout << quiz[i].options[j] << endl;
        }

        cout << "Your Answer: ";
        cin >> userGuess;
        
        // Convert input to uppercase to safely match character answers
        userGuess = toupper(userGuess);

        // Check if the answer matches the answer key
        if (userGuess == quiz[i].correctAnswer) {
            cout << ">> Correct! :)\n" << endl;
            score++;
        } else {
            cout << ">> Wrong! :( The correct answer was " << quiz[i].correctAnswer << ".\n" << endl;
        }
    }

    // Display final score calculations
    double percentage = (static_cast<double>(score) / totalQuestions) * 100;
    
    cout << "=========================================" << endl;
    cout << "                RESULTS                  " << endl;
    cout << "=========================================" << endl;
    cout << "Total Questions: " << totalQuestions << endl;
    cout << "Correct Answers: " << score << endl;
    cout << "Your Score     : " << percentage << "%" << endl;
    
    if (percentage >= 70.0) {
        cout << "Status         : CONGRATULATIONS! You passed." << endl;
    } else {
        cout << "Status         : Better luck next time!" << endl;
    }
    cout << "=========================================" << endl;

    
}
