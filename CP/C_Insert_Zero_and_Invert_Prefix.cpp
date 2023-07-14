#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a) {
  int n = a.size();
  vector<int> b(n);
  vector<int> p;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      b[i] = 1;
      p.push_back(i);
    } else {
      b[i] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      for (int j = i; j >= 0; j--) {
        b[j] = 1 - b[j];
      }
      p.push_back(i);
    }
  }

  if (p.empty()) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    for (int i = 0; i < p.size(); i++) {
      cout << p[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    solve(a);
  }
  return 0;
}
