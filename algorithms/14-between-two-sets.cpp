#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, total = 0;
    cin >> n >> m;
    int temp;

    vector<int> nn;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nn.push_back(temp);
    }
    sort(nn.begin(), nn.end());
    int min = nn.back();
    int kpk = min, adder = min;
    for (auto i : nn) {
        while (kpk % i != 0) {
            kpk += adder;
        }
        adder = kpk;
    }
    // cout << kpk << endl;

    vector<int> mm;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        mm.push_back(temp);
    }
    sort(mm.begin(), mm.end());
    int max = mm.front();
    // cout << kpk << " " << max << endl;

    while (kpk <= max) {
        temp = 0;
        for (auto i : mm) {
            // cout << i << " " << kpk << endl;
            if (i % kpk == 0) {
                temp = 1;
            } else {
                temp = 0;
                break;
            }
        }
        if (temp == 1) {
            total++;
        }
        kpk += adder;
    }

    cout << total << endl;

    return 0;
}