#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, temp;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    int suc = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j]) % k == 0) {
                suc++;
            }
        }
    }

    cout << suc << endl;

    return 0;
}