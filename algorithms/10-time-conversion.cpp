#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    // cout << s << endl;
    string s1 = s.substr(0, 2);
    string s2 = s.substr(2, 6);
    string s3 = s.substr(8, 2);

    int hour = stoi(s1);
    if (hour >= 12) {
        hour -= 12;
    }

    if (s3 == "PM") {
        hour += 12;
    }

    printf("%02d", hour);
    cout << s2 << endl;

    return 0;
}