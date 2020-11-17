#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    int val, total = 0;
    for (int i = 1; i <= 5; i++) {
        temp = count(v.begin(), v.end(), i);
        if (temp > total) {
            total = temp;
            val = i;
        }
    }

    cout << val << endl;

    return 0;
}