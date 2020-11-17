#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, v1, v2;
    bool get = false;
    cin >> x1 >> v1 >> x2 >> v2;

    if (x1 != x2) {
        while (x1 < x2) {
            x1 += v1;
            x2 += v2;
            // cout << x1 << " " << x2 << endl;
            if (x1 == x2) {
                get = true;
                break;
            }
        }
    }

    if (get) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}