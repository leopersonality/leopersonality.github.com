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

    cout << "Generated " << randomIndexes.size() << " unique random indexes: ";
    for (int index : randomIndexes) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
