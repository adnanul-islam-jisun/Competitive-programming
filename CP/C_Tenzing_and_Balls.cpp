#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<int> colors(n);
        for (int i = 0; i < n; i++) {
            cin >> colors[i];
        }

        int maxRemovableBalls = 0;
        unordered_map<int, int> maxConsecutive;

        for (int i = 0; i < n; i++) {
            int color = colors[i];
            int consecutive = 1;

            if (maxConsecutive.count(color)) {
                consecutive = max(consecutive, maxConsecutive[color] +2);
            }

            maxConsecutive[color] = consecutive;
            maxRemovableBalls = max(maxRemovableBalls, consecutive);
        }

        int totalRemovableBalls = 0;
        for (auto& entry : maxConsecutive) {
            totalRemovableBalls += entry.second;
        }

        cout << (totalRemovableBalls - maxRemovableBalls) << endl;
    }

    return 0;
}
