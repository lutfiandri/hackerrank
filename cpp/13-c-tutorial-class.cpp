#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int age, standard;
    string first_name, last_name;

   public:
    // SETTER
    void set_age(int x) {
        age = x;
    }
    void set_standard(int x) {
        standard = x;
    }
    void set_first_name(string x) {
        first_name = x;
    }
    void set_last_name(string x) {
        last_name = x;
    }

    // GETTER
    int get_age() {
        return age;
    }
    int get_standard() {
        return standard;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }

    string t_string() {
        string s_age = to_string(age);
        string s_standard = to_string(standard);
        return (s_age + "," + first_name + "," + last_name + "," + s_standard + "\n");
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.t_string();

    return 0;
}