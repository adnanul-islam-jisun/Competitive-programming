#include <iostream>
#include <vector>

using namespace std;

int minimumOnes(int n, int k) {
    int result = n;
    
    for (int i = 1; i <= n; i++) {
        int ones = ((i + k - 2) / k) + ((n - i - 1 + k) / k);
        result = min(result, ones);
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int minOnes = minimumOnes(n, k);
        results.push_back(minOnes+1);
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
