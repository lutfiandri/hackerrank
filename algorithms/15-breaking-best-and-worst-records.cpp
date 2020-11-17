#include <bits/stdc++.h>
using namespace std;

int main() {
    int tmin = 0, tmax = 0;
    int n, temp;
    cin >> n;
    vector<int> scores;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        scores.push_back(temp);
    }
    int min = scores[0];
    int max = scores[0];

    for (auto i : scores) {
        // cout << min << " " << i << endl;
        if (i < min) {
            min = i;
            tmin++;
        }
        // cout << max << " " << i << endl
        //  << endl;
        if (i > max) {
            max = i;
            tmax++;
        }
    }

    cout << tmax << " " << tmin << endl;

    return 0;
}