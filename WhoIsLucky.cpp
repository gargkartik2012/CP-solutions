#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to toggle the binary values of A and B
void toggleBinary(string &binary) {
    for (char &c : binary) {
        c = (c == '0') ? '1' : '0';
    }
}

// Function to play the game and determine the winner
string playGame(vector<int> &arr, string &a, string &b, int k) {
    int n = arr.size();
    int rahulSum = 0, rupeshSum = 0;

    for (int turn = 0; !arr.empty(); ++turn) {
        auto maxElement = max_element(arr.begin(), arr.end());
        int maxIndex = distance(arr.begin(), maxElement);

        int left = max(0, maxIndex - k);
        int right = min(n - 1, maxIndex + k);

        vector<int> selectedValues(arr.begin() + left, arr.begin() + right + 1);
        arr.erase(arr.begin() + left, arr.begin() + right + 1);

        int sum = accumulate(selectedValues.begin(), selectedValues.end(), 0);

        if (turn % 2 == 0) {
            rahulSum += sum;
        } else {
            rupeshSum += sum;
        }
    }

    if (!a.empty() && !b.empty()) {
        toggleBinary((rahulSum > rupeshSum) ? a : b);
    }

    return (rahulSum > rupeshSum) ? "Rupesh" : "Rahul";
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    string rahulA, rahulB, rupeshA, rupeshB;
    cin >> rahulA >> rahulB >> rupeshA >> rupeshB;

    int k;
    cin >> k;

    string winner = playGame(arr, rahulA, rahulB, k);

    cout << winner << endl;

    return 0;
}
