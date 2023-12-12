#include <bits/stdc++.h>

using namespace std;

// Function to calculate the digit sum of a number
int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// Function to count the number of good triples for a given number n
int countGoodTriples(int n) {
    int count = 0;
    int maxDigitSum = 9 * (int)log10(n) + 9;

    for (int a = 0; a <= n && a <= maxDigitSum; ++a) {
        for (int b = 0; b <= n - a && b <= maxDigitSum; ++b) {
            int c = n - a - b;
            if (c >= 0 && c <= maxDigitSum &&
                digitSum(a) + digitSum(b) + digitSum(c) == digitSum(n)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = countGoodTriples(n);
        cout << result << endl;
    }

    return 0;
}
