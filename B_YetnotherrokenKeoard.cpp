#include<bits/stdc++.h> 

using namespace std;

int main() {
    int t;
    cin >> t;
    // vector<int> a;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     a.pop_back(x);
    // }

    while (t--) {
        string s;
        cin >> s;
        vector<int> lw, up;
        string la = "qwertyuiopasdfghjklzxcvbnm";
        string ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
        vector<char> a;
        string ans = "";
        int c = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'B' && !up.empty()) {
                a[up.back()] = '_';
                up.pop_back();
            } else if (s[i] == 'b' && !lw.empty()) {
                a[lw.back()] = '_';
                lw.pop_back();
            } else if (s[i] != 'b' && s[i] != 'B') {
                if (la.find(s[i]) != string::npos) {
                    lw.push_back(c);
                } else {
                    up.push_back(c);
                }
                a.push_back(s[i]);
                c++;
            }
        }

        for (char i : a) {
            if (i != '_') {
                ans += i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
