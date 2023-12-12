#include <iostream>
#include <vector>

using namespace std;

void rook_moves(int t, const vector<string>& test_cases) {
    for (int i = 0; i < t; ++i) {
        string position = test_cases[i];
        char column = position[0];
        int row = position[1] - '0';

        // Output possible moves
        for (int j = 1; j <= 8; ++j) {
            if (j != row) {
                cout << column << j << endl;
            }
        }

        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != column) {
                cout << c << row << endl;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<string> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }

    // Output results
    rook_moves(t, test_cases);

    return 0;
}
