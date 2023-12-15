#include <iostream>
#include <random>
#include <set>
using namespace std;

set<int> generateRandomIndexes() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 9);

    set<int> selectedIndexes;
    while (selectedIndexes.size() < 5) {
        int number = dis(gen);
        selectedIndexes.insert(number);
    }
    return selectedIndexes;
}

int main() {
    set<int> randomIndexes = generateRandomIndexes();

    // Test scenario: Check if the generated random indexes count is 5
    if (randomIndexes.size() == 5) {
        cout << "Test passed: Generated 5 unique random indexes." << endl;
    } else {
        cout << "Test failed: Did not generate 5 unique random indexes." << endl;
    }

    return 0;
}
