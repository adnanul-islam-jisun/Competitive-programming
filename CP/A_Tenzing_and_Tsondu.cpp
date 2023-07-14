#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long int> a(n);
        vector<long long int> b(m);
        long long suma = 0, sumb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }
        if (suma > sumb)
            cout << "Tsondu" << endl;
        else if (suma < sumb)
            cout << "Tenzing" << endl;
        else if (suma == sumb)
            cout << "Draw" << endl;
    }
    return 0;
}