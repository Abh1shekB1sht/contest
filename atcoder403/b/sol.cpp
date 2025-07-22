/**
  * author: abhishek_bisht
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string a, b;
  cin >> a >> b;
  for (int i = 0; i <= (int)a.size() - (int)b.size(); i++) {
    bool ok = true;
    for (int j = 0; j < (int)b.size(); j++) {
      if (a[i + j] != '?' && a[i + j] != b[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "YES" << '\n';
      return 0;
    }
  }
  cout << "NO" << '\n';
  return 0;
}