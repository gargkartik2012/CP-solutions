#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> positiveRatings;

    // Input parsing
    for (int i = 0; i < n; ++i) {
        int id, rating;
        char colon;
        cin >> id >> colon >> rating;
        if (rating > 0) {
            positiveRatings[id] += rating;
        }
    }

    int positiveGems = 0;

    // Calculate total positive gems
    for (const auto& pair : positiveRatings) {
        positiveGems += pair.second;
    }

    cout << positiveGems << endl;

    return 0;
}
