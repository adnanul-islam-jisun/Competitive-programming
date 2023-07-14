#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, long long> dp;
    int maxElement = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dp[x] += x;
        maxElement = max(maxElement, x);
    }

    long long prevPoints = 0;
    long long currPoints = 0;

    for (int i = 1; i <= maxElement; i++) {
        long long newPoints = max(prevPoints + dp[i], currPoints);
        prevPoints = currPoints;
        currPoints = newPoints;
    }

    cout << currPoints << endl;

    return 0;
}
