#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float x;
    float pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) {
            neg++;
        } else if (x == 0) {
            zero++;
        } else {
            pos++;
        }
    }

    pos = pos / n;
    neg = neg / n;
    zero = zero / n;

    printf("%.6f\n%.6f\n%.6f\n", pos, neg, zero);

    return 0;
}