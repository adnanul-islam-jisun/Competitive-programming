// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long applicantSize[n];
    for (int i = 0; i < n; i++)
    {
        cin >> applicantSize[i];
    }
    long long apertmentSize[m];
    for (int i = 0; i < m; i++)
    {
        cin >> apertmentSize[i];
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((apertmentSize[i] - k) <= applicantSize[j] && (apertmentSize[i] + k) >= applicantSize[j]){
                count++;
                apertmentSize[j]=0;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}