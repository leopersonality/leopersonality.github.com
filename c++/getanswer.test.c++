#include <iostream>
#include <vector>
using namespace std;

// Similar structures for Question and Answer as described previously

string getAnswer(const vector<Question>& questions, int questionIndex, int answerIndex) {
    if (questionIndex >= 0 && questionIndex < questions.size() && !questions.empty()) {
        if (answerIndex >= 0 && answerIndex < questions[questionIndex].answers.size()) {
            return questions[questionIndex].answers[answerIndex].text;
        } else {
            return "Invalid answer index";
        }
    } else {
        return "Invalid question index or empty question set";
    }
}

int main() {
    // Define questions (similar to the previous example)

    vector<Question> questions = {
        // ... (questions data here)
    };

    int questionIndex = 2;
    int answerIndex = 0;
    string expectedAnswer = questions[questionIndex].answers[answerIndex].text;

    // Test scenario
    string retrievedAnswer = getAnswer(questions, questionIndex, answerIndex);

    // Check if the retrieved answer matches the expected answer
    if (retrievedAnswer == expectedAnswer) {
        cout << "Test passed: Retrieved answer matches expected answer." << endl;
    } else {
        cout << "Test failed: Retrieved answer does not match expected answer." << endl;
    }

    return 0;
}
