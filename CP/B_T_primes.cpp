#include <bits/stdc++.h>

using namespace std;

set<long long> countDivisors()
{
    set<long long> divisorCounts;
    int sqrt_lim = 100001;

    bool arr[sqrt_lim] = {false};

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            divisorCounts.insert((long long)i * i);
    }
    return divisorCounts;
}

int main()
{
    set<long long> divisorCounts = countDivisors();
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (divisorCounts.find(x) != divisorCounts.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
