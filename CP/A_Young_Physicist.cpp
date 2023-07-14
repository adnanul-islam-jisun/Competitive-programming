// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int arr[3] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            arr[j] = arr[j] + x;
        }
    }
    if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}