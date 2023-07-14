#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, res = 0;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> rand(n,0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
       
        for(int i = 1;i<n;i++){
            int x = abs(a[i] - a[i-1]);
            rand.push_back(x);
        }
 sort(rand.begin(), rand.end(),greater<int>());
        
    //    for(auto i : rand ){
    //       res+=i;
    //    }
    for(int i = k-1 ;i< rand.size() ; i++){
        res+=rand[i];
    }
    //    for(auto i : rand ){
    //      cout<< i  << " "<<endl;
    //    }
       cout  <<  res<<endl;
    }

    return 0;
}