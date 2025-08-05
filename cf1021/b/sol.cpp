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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n == k) {
      cout << 0 << '\n';
      continue;
    }
    sort(a.begin(), a.end());
    int w = n - k;
    cout << a[n - 1 - (w - 1) / 2] - a[(w - 1) / 2] + 1 << '\n';
  }
  return 0;
}