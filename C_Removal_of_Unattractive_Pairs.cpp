#include <iostream>
#include <stack>

using namespace std;

int minimumLength(string s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() != c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    return st.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = minimumLength(s);
        cout << result << endl;
    }

    return 0;
}
