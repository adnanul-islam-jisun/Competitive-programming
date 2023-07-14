#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    long long n,m;
    cin>> t;
    while(t--)
    {
        cin>> n>>m;
 
        long long sum=0,a[n];
        long long _max=0,_min=INT_MAX;
        for (int i=0;i<n;i++)
        {
            cin>> a[i];
            sum=sum+a[i];
            _max=max(_max,a[i]);
            _min=min(_min,a[i]);
        }
        long long chair_need=sum+_max+n-_min;
      
            if (chair_need<=m)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
 
    }
    return 0;
}