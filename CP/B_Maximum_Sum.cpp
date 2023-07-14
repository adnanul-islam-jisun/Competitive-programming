#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        set<long long> num;
      
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            
           
            num.insert(x);
        }
        long long result = 0;
        long long answer1,answer2;
        for (int i = 1; i <= k; i++)
        {
            auto min1 = *num.begin();
            auto min2 = *++num.begin();
            auto _max = *num.rbegin();
            long long total = 0;
            for (auto &it : num)
            {
                total += it;
            }

             answer1 = total - min1 - min2;
             answer2 = total - _max;
            if (answer1 <= answer2)
            {
                num.erase(min1);
                num.erase(min2);
            }
            else
                num.erase(_max);
        }
        result = max(answer1, answer2);
        cout << result << endl;
    }

    return 0;
}
