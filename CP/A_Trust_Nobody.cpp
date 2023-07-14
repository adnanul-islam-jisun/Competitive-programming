#include <iostream>

using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        bool test=true;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int k = 0; k <= n; ++k) {
        int lie = 0;
        for (int i = 0; i < n; i++) {
            if (!(k >= arr[i])) {
                ++lie;
            }
        }
        if (lie == k) {
            cout << k << '\n';
            test=false;
            break;
        }
    }
    if(test)
    cout << "-1\n";
    }

    return 0;
}
