#include <iostream>
#include <vector>

bool isPowerOfTwo(int x) {
    return (x & (x - 1)) == 0 && x != 0;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    bool f = true;

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1] && !isPowerOfTwo(i + 1)) {
            f = false;
            break;
        }
    }

    std::cout << (f ? "YES" : "NO") << std::endl;
}

int main() {
    int tc;
    std::cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
