#include <bits/stdc++.h>

// #include <sstream>
using namespace std;
int main() {
    int n, q;
    string temp;
    cout << "masukkan n dan q ";
    cin >> n >> q;
    vector<string> hrmls;
    vector<string> queries;

    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, temp);
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        hrmls.push_back(temp);
    }

    for (int i = 0; i < q; i++) {
        getline(cin, temp);
        queries.push_back(temp);
    }

    map<string, string> m;
    vector<string> v_tag;

    for (auto x : hrmls) {
        if (x.substr(0, 2) == "</") {
            v_tag.pop_back();
        } else {
            x.erase(0, 1);
            stringstream ss;
            ss.str("");
            ss << x;
            string tag, key, value, tag_temp = "";
            char ch;
            ss >> tag >> key >> ch >> value;
            if (tag.size() > 0) {
                tag_temp = *tag.rbegin();
                tag_temp = tag_temp + "." + tag;
            } else {
                tag_temp = tag;
            }
            v_tag.push_back(tag_temp);
            m[*v_tag.rbegin() + "~" + key] = value;
            while (ss) {
                ss >> key >> ch >> value;
                m[*v_tag.rbegin() + "~" + key] = value;
            }
        }
    }

    for (auto x : queries) {
        cout << x << endl;
    }

    for (int i = 0; i < q; i++) {
        if (m.find(queries[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout << m[queries[i]] << endl;
    }

    return 0;
}