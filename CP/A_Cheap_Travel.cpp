#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (static_cast<float>(b) / m > a)
    {
        cout << n * a << endl;
    }
    else
    {
        int m_ticket = n / m;
        int m_price = m_ticket * b;
        int n_ticket = n - m_ticket * m;
        int n_price = n_ticket * a;
        int total_sum = m_price + n_price;
        int total_sum1 = m_price + b;
        if (total_sum < total_sum1)
            cout << total_sum << endl;
        else
            cout << total_sum1 << endl;
    }

    return 0;
}
