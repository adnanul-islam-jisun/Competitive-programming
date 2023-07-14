#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    s.erase(i, j-1);
                    i=j+1;
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
