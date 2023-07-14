// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct Message
{
    string sender;
    string recipient;
    int time;

} m[10001];

int main()
{
    int n, d;
    cin >> n >> d;
    set<pair<string, string>> s;

    for (int i = 0; i < n; ++i)
    {
        cin >> m[i].sender >> m[i].recipient >> m[i].time;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i].sender == m[j].recipient&& m[i].recipient==m[j].sender)
            {
                if (m[j].time - m[i].time <= d && m[j].time - m[i].time > 0)
                {
                    string se=min(m[i].sender, m[i].recipient);
                    string re=max(m[i].sender, m[i].recipient);

                    s.insert(make_pair(se,re));
                }
            }
        }
    }
    cout << s.size() << endl;
    if (s.size())
    {
        for (auto f : s)
        {
            cout << f.first << " " << f.second << '\n';
        }
    }

    return 0;
}