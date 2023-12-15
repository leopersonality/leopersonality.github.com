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

string getAnswer(const vector<Question>& questions, int index) {
    if (index >= 0 && index < questions.size() && !questions.empty()) {
        return questions[index].answers[0].text;
    } else {
        return "Invalid index or empty question set";
    }
}

int main() {
    // Define questions (similar to the previous example)

    vector<Question> questions = {
        // ... (questions data here)
    };

    // Example usage
    int questionIndex = 2; // Replace this with the desired question index
    string answer = getAnswer(questions, questionIndex);

    cout << "Answer to question " << questionIndex << ": " << answer << endl;

    return 0;
}
