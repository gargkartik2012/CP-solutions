#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9;

int solve(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int ans = INF;

    for (int j = 0; j < n; j++) {
        int ans1 = INF;
        int ans3 = INF;
        int ans2 = b[j];

        for (int i = 0; i < j; i++) {
            if (a[j] > a[i])
                ans1 = min(ans1, b[i]);
        }

        for (int k = j + 1; k < n; k++) {
            if (a[k] > a[j])
                ans3 = min(ans3, b[k]);
        }

        ans = min(ans, ans1 + ans2 + ans3);
    }

    return (ans >= INF) ? -1 : ans;
}

int main() {
    int t;
   // cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int result = solve(a, b);
        cout << result << endl;
    }

    return 0;
}
