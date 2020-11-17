#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int score, s;
    for (int i = 0; i < n; i++) {
        cin >> score;
        s = score % 5;
        if (score >= 38 && s > 0 && s >= 3) {
            score += 5 - s;
        }
        cout << score << endl;
    }

    return 0;
}