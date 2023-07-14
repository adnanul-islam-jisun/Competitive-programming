#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string* names = new string[n];
    
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    
    map<string, int> nameCount;
    
    for (int i = 0; i < n; i++) {
        nameCount[names[i]]++;
        
        if (nameCount[names[i]] == 1) {
            cout << "OK" << endl;
        } else {
            cout << names[i] + to_string(nameCount[names[i]] - 1) << endl;
        }
    }
    
    delete[] names;
    
    return 0;
}
