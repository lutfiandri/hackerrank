#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int aa = 0, bb = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            aa++;
        } else if (a[i] < b[i]) {
            bb++;
        }
    }

    cout << aa << " " << bb << endl;

    return 0;
}