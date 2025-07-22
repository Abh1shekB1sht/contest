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
  const int m = 6000000;
  vector<int> cp(m + 1);
  vector<int64_t> sp = {0};
  for (int i = 2; i <= m; i++) {
    if (!cp[i]) {
      sp.push_back(sp.back() + i);
      for (int j = i; j <= m; j += i) cp[j] = 1;
    }
  }
  while (t--) {
    int n, ans = 0;
    cin >> n;
    vector<int64_t> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int64_t>());
    int64_t s = 0;
    for (int i = 0; i < n; i++) {
      s += a[i];
      if (s >= sp[i + 1]) ans = i + 1;
    }
    cout << n - ans << '\n';
    
  }
  return 0;
}