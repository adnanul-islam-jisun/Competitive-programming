// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;
const long long c = 1e9 + 10;
vector<long long> dp;
long long n;

long long count(int sum)
{
    long long ans = INT_MAX;
    if (sum == 0)
    {
        return 0;
    }
    if (dp[sum] != -1)
        return dp[sum];

    for (long long i = 1; i <= n; i++)
    {
        if (sum - i >= 0)
        {
            ans = min(ans , count(sum - i) + 1);
        }
    }
    return dp[sum] = ans;
}

int main()
{
    long long sum;
    cin >> n >> sum;
    dp.resize(sum+1,-1);
    cout << count(sum) << endl;

    return 0;
}