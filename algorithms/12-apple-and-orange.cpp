#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int apples = 0, oranges = 0;
    int pos;

    // for apple -> m
    for (int i = 0; i < m; i++) {
        cin >> pos;
        pos = a + pos;
        if (pos >= s && pos <= t) {
            apples += 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> pos;
        pos = b + pos;
        if (pos >= s && pos <= t) {
            oranges += 1;
        }
    }

    cout << apples << endl
         << oranges << endl;

    return 0;
}