// Boss Adnan Is Ready For Coading

#include<bits/stdc++.h>

using namespace std;


int main()
{
    
    int s , n;
    cin >> s >> n;

    vector<pair<int, int>> fights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fights[i].first >> fights[i].second;
    }

    sort(fights.begin(), fights.end());

    for (auto &pr : fights)
    {
        if (pr.first < s)
        {
            s += pr.second;
        }
        else
        {
            cout << "NO"<<endl;
            return 0;
        }
    }

    cout << "YES"<<endl;
    return 0;
}
