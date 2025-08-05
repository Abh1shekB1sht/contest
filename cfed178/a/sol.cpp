/**
  * author: abhishek_bisht
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + (b - a) == b && b == c - (b -a)) {
      cout << "YES" << '\n';
      continue;
    }
    int df = b - a;
    a += df;
    c -= df;
    if (a == b && b == c) {
      cout << "YES" << '\n';
      continue;
    }
    if (a > c && b > c) {
      cout << "NO" << '\n';
      continue;
    }
    int dif = c - a;
    if (dif % 3 == 0) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}