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
            "Gently interrupt or redirect the conversation, expressing your workload: "I'd love to hear more, but I'm currently swamped with work. Perhaps we can catch up later during a break?",
            {
                {"Refrain from interrupting them under any circumstances.", "introvert"},
                {"Believe that allocating some of your time to them is a priority; work can be put on hold.", "extrovert"},
                {"Half-heartedly listen while being partially engaged.", "introvert"},
                {"Politely interrupt and clarify that you're currently occupied with pressing tasks.", "extrovert"}
            }
        },
        // ... (other questions here)
        {
            10,
            "When approached for assistance at work repeatedly by the same person, even for the hundredth time, how do you typically respond?",
            {
                {"Assist them, as is your custom.", "introvert"},
                {"Ask them, please, to find somebody else for a change", "extrovert"},
                {"Agree—your reputation precedes you as someone who is always willing to assist.", "introvert"},
                {"Express your frustration audibly, letting it be known that you're irritated.", "extrovert"}
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
