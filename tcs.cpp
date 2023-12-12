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





// #include <iostream>
// #include <vector>
// #include <bitset>

// using namespace std;

// int main() {
//     int n, k;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     bitset<5> rahulA, rahulB, rupeshA, rupeshB;
//     cin >> rahulA >> rahulB >> rupeshA >> rupeshB >> k;

//     int rahulSum = 0, rupeshSum = 0;

//     bool rahulTurn = true;  // Rahul starts first

//     while (!arr.empty()) {
//         auto maxIt = max_element(arr.begin(), arr.end());
//         int maxIndex = distance(arr.begin(), maxIt);

//         int start = max(0, maxIndex - k);
//         int end = min(static_cast<int>(arr.size()) - 1, maxIndex + k);

//         int roundSum = 0;
//         for (int i = start; i <= end; ++i) {
//             roundSum += arr[i];
//         }

//         if (rahulTurn) {
//             rahulSum += roundSum;
//             rahulA.flip();
//             rahulTurn = false;
//         } else {
//             rupeshSum += roundSum;
//             rupeshA.flip();
//             rahulTurn = true;
//         }

//         arr.erase(arr.begin() + start, arr.begin() + end + 1);
//     }

//     if (rupeshSum > rahulSum) {
//         rupeshB.flip();
//     } else {
//         rahulB.flip();
//     }

//     bitset<5> rahulResult = rahulA ^ rahulB;
//     bitset<5> rupeshResult = rupeshA ^ rupeshB;

//     if (rahulResult.to_ullong() > rupeshResult.to_ullong()) {
//         cout << "Rahul" << endl;
//     } else if (rahulResult.to_ullong() < rupeshResult.to_ullong()) {
//         cout << "Rupesh" << endl;
//     } else {
//         cout << "both" << endl;
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     int n;
//     cin >> n;

//     unordered_map<int, int> poRatings;

    
//     for (int i = 0; i < n; ++i) {
//         int id, rating;
//         char c;
//         cin >> id >> c>> rating;
//         if (rating > 0) {
//             poRatings[id] += rating;
//         }
//     }

//     int positiveGems = 0;

    
//     for (const auto&pair : poRatings) {
//         positiveGems += pair.second;
//     }

//    cout << positiveGems;

//     return 0;
// }
