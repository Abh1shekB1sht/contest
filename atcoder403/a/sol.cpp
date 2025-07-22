/**
  * author: abhishek_bisht
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int cnt = 1, ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (cnt++ & 1) ans += x;
  }
  cout << ans << '\n';
  return 0;
}