#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        
        vector<pair<int, int>> arr(freq.begin(), freq.end());
        sort(arr.begin(), arr.end(), comp);
        
        if (arr[0].second >= 3)
            cout << arr[0].first << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}
