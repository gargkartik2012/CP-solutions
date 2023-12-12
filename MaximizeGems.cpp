#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    unordered_map<int, int> poRatings;

    
    for (int i = 0; i < n; ++i) {
        int id, rating;
        char c;
        cin >> id >> c>> rating;
        if (rating > 0) {
            poRatings[id] += rating;
        }
    }

    int positiveGems = 0;

    
    for (const auto&pair : poRatings) {
        positiveGems += pair.second;
    }

   cout << positiveGems;

    return 0;
}
