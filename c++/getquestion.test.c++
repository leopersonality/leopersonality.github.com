#include <iostream>
#include <vector>
using namespace std;

// Similar structures for Question and Answer as described previously

string getQuestion(const vector<Question>& questions, int index) {
    if (index >= 0 && index < questions.size() && !questions.empty()) {
        return questions[index].question;
    } else {
        return "Invalid index or empty question set";
    }
}

int main() {
    // Define questions (similar to the previous examples)

    vector<Question> questions = {
        // ... (questions data here)
    };

    int questionIndex = 2;
    string expectedQuestion = questions[questionIndex].question;

    // Test scenario
    string retrievedQuestion = getQuestion(questions, questionIndex);

    // Check if the retrieved question matches the expected question
    if (retrievedQuestion == expectedQuestion) {
        cout << "Test passed: Retrieved question matches expected question." << endl;
    } else {
        cout << "Test failed: Retrieved question does not match expected question." << endl;
    }

    return 0;
}
