#include <iostream>
using namespace std;

int calculate_score(int n, int x, int y) {
    int score_x = (n / x) * y + (n % x);
    int score_y = (n / y) * x + (n % y);
    return max(score_x, score_y);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, x, y;
        cin >> n >> x >> y;
        int max_score = calculate_score(n, x, y);
        cout << max_score << endl;
    }

    return 0;
}
