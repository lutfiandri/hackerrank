#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), greater<int>());

    int total = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == v[0]) {
            total++;
        } else {
            break;
        }
    }

    cout << total << endl;

    return 0;
}