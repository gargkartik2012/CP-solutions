#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << round(ceil(abs(a-b)/double(c))/2) << endl;
    }
    return 0;
}
