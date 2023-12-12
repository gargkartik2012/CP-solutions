#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperationsToSort(vector<int>& arr) {
    int n = arr.size();

    // Check if the array is already sorted
    if (is_sorted(arr.begin(), arr.end())) {
        return 0;
    }

    // Check if rotating the array can sort it
    for (int i = 0; i < n; ++i) {
        rotate(arr.begin(), arr.begin() + 1, arr.end());
        if (is_sorted(arr.begin(), arr.end())) {
            return i + 1;
        }
    }

    // Check if reversing and rotating the array can sort it
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i) {
        rotate(arr.begin(), arr.begin() + 1, arr.end());
        if (is_sorted(arr.begin(), arr.end())) {
            return n + i + 1;
        }
    }

    // If no operation works, it is impossible to sort the array
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = minOperationsToSort(arr);
        cout << result << endl;
    }

    return 0;
}
