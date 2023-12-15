#include <iostream>
#include <vector>
using namespace std;

struct Answer {
    string text;
    string cat;
};

struct Question {
    int id;
    string question;
    vector<Answer> answers;
};

int main() {
    vector<Question> questions = {
        {
            1,
            "You're really busy at work and a colleague is telling you their life story and personal woes. You:",
            {
                {"Don't dare to interrupt them", "introvert"},
                {"Think it's more important to give them some of your time; work can wait", "extrovert"},
                {"Listen, but with only with half an ear", "introvert"},
                {"Interrupt and explain that you are really busy at the moment", "extrovert"}
            }
        },
        // ... (other questions here)
        {
            10,
            "At work, somebody asks for your help for the hundredth time. You:",
            {
                {"Give them a hand, as usual", "introvert"},
                {"Ask them, please, to find somebody else for a change", "extrovert"},
                {"Accept — you're known for being helpful", "introvert"},
                {"Loudly make it known that you're annoyed", "extrovert"}
            }
        }
    };

    // Accessing the questions and answers
    for (const auto &question : questions) {
        cout << "Question " << question.id << ": " << question.question << endl;
        cout << "Answers:" << endl;
        for (const auto &answer : question.answers) {
            cout << "- " << answer.text << " (Category: " << answer.cat << ")" << endl;
        }
        cout << endl;
    }

    return 0;
}
