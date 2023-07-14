// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> box;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        switch (x)
        {
        case 1:
        {
            box.insert(y);
            break;
        }
        case 2:
        {
            box.erase(y);
            break;
        }
        case 3:
        {
            auto it = box.find(y);
            if (it == box.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
            break;
        }
        }
    }

    return 0;
}