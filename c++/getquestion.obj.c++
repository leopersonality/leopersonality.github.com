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

Question getQuestionObj(const vector<Question>& questions, int index) {
    if (index >= 0 && index < questions.size() && !questions.empty()) {
        return questions[index];
    } else {
        // Return an empty Question object or handle the case as required
        return Question{-1, "Invalid index or empty question set", {}};
    }
}

int main() {
    // Define questions (similar to the previous examples)

    vector<Question> questions = {
        // ... (questions data here)
    };

    int questionIndex = 2; // Replace this with the desired question index
    Question retrievedQuestionObj = getQuestionObj(questions, questionIndex);

    // Display the retrieved question object
    cout << "Question Object at index " << questionIndex << ":" << endl;
    cout << "ID: " << retrievedQuestionObj.id << endl;
    cout << "Question: " << retrievedQuestionObj.question << endl;

    // You can access answers in a similar way if needed

    return 0;
}
