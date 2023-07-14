//Boss Adnan Is Ready For Coading
  
#include <bits/stdc++.h>
  
using namespace std;
   
int main() {
    int n, x;
    cin >> n >> x;

    int weight[n];
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    sort(weight, weight + n);

    int gondolaCount = 0;
    int left = 0; 
    int right = n - 1; 

    while (left <= right) {
        if (weight[left] + weight[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        gondolaCount++;
    }

    cout << gondolaCount << endl;

    return 0;
}