#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5, num;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    long long min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            min += v[i];
        }
        if (i > 0) {
            max += v[i];
        }
    }

    cout << min << " " << max << endl;

    return 0;
}