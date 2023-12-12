#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> minimalSwitches(int n, string initial, vector<int>& switches) {
    unordered_set<int> switchesUsed;
    vector<int> result;

    for (int i = n - 1; i >= 0; --i) {
        if (initial[i] == '1' && switchesUsed.find(switches[i]) == switchesUsed.end()) {
            result.push_back(switches[i]);
            switchesUsed.insert(switches[i]);
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string initial;
        cin >> initial;

        vector<int> switches(n);
        for (int i = 0; i < n; ++i) {
            cin >> switches[i];
        }

        vector<int> result = minimalSwitches(n, initial, switches);

        if (result.empty()) {
            cout << -1 << endl;
        } else {
            cout << result.size() << endl;
            for (int i : result) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
