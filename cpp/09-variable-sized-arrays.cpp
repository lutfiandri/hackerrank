#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    int m, o;
    cin >> n >> q;
    vector<int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> o;
            a[i].push_back(o);
        }
    }
    for (int i = 0; i < q; i++) {
        int m, o;
        cin >> m >> o;
        cout << a[m][o] << endl;
    }

    return 0;
}