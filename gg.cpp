#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(1 << 30));
    dp[0][0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (1 << 30); j++) {
            dp[i][j] = dp[i - 1][j] || dp[i - 1][j ^ a[i - 1]];
        }
    }

    string ans(n, '0');
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i + 1][j ^ a[i]]) {
            ans[i] = '1';
            j ^= a[i];
        }
    }

    cout << ans << endl;

    return 0;
}
