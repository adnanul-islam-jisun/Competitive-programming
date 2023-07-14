#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
 
    string FB;
    for (int i = 1; i <= 15; i++) {
        if (i % 3 == 0 && i % 5 == 0) FB += "FB";
        if (i % 3 == 0) FB += "F";
        if (i % 5 == 0) FB += "B";
    }
    cout<<FB<<endl;
 
    while (t--) {
        int k;
        cin >> k;
 
 
        char* s = new char[k+1];
        cin >> s;
 
 
        if (FB.find(s) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
 
        delete[] s;
    }
 
    return 0;
}