#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    int d, m, suc = 0, total;
    cin >> d >> m;

    for (int i = 0; i <= n - m; i++) {
        total = 0;
        for (int j = 0; j < m; j++) {
            total += arr[i + j];
        }
        if (total == d) {
            suc++;
        }
    }

    cout << suc;

    return 0;
}