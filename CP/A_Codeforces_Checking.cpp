// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;
        string code = "codeforces";
        cin >> input;
        size_t pos = code.find(input);
        if (pos != string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}