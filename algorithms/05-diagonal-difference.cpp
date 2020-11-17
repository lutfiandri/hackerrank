#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (i == j) {
                d1 += arr[i][j];
            }
            if (i + j == n - 1) {
                d2 += arr[i][j];
            }
        }
    }

    int d = d1 - d2;
    if (d < 0) {
        d = -d;
    }

    cout << d << endl;

    return 0;
}