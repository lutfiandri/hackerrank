#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    cin >> text;
    stringstream ss(text);
    vector<int> numbers;
    int number;
    char ch = ',';
    while (ss >> number) {
        ss >> ch;
        numbers.push_back(number);
    }

    for (auto num : numbers) {
        cout << num << endl;
    }

    return 0;
}