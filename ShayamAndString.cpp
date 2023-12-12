#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int shyamAndStrings(const string& str1, const string& str2, int kre) {
    int noon = str1.length();
    int moon = str2.length();
    vector<vector<int>> dp(noon + 1, vector<int>(moon + 1, 0));

    for (int i = 1; i <= noon; ++i) {
        for (int j = 1; j <= moon; ++j) {
            int cnt = 0;
            if (str1[i - 1] != str2[j - 1]) {
                cnt = min(abs(static_cast<int>(str1[i - 1]) - static_cast<int>(str2[j - 1])), 26 - abs(static_cast<int>(str1[i - 1]) - static_cast<int>(str2[j - 1])));
            }

            if (cnt <= kre) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }

            dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
        }
    }

    return dp[noon][moon];
}

int main() {
    string str1, str2;
    int kre;
    cin>>str1>>str2>>kre;
    cout<<shyamAndStrings(str1, str2, kre);
        
    }
