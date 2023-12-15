#include <iostream>
using namespace std;

string getResult(int introvert, int extrovert) {
    if (introvert > extrovert) {
        return "You're an Introvert";
    } else {
        return "You're an Extrovert";
    }
}

bool performTest(int introvertCount, int extrovertCount, const string& expected) {
    string result = getResult(introvertCount, extrovertCount);
    return result == expected;
}

int main() {
    // Test scenario
    int introvertCount = 3;
    int extrovertCount = 2;
    string expected = "You're an Introvert";

    // Check if the function produces the expected result
    if (performTest(introvertCount, extrovertCount, expected)) {
        cout << "Test passed: Result matches expected output." << endl;
    } else {
        cout << "Test failed: Result does not match expected output." << endl;
    }

    return 0;
}
