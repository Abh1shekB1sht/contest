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
    int n;
    cin >> n;
    vector<uint64_t> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<uint64_t> maxi(n);
    uint64_t mx = a[0];
    for (int i = 0; i < n; i++) {
      mx = max(mx, a[i]);
      maxi[i] = mx;
    }
    vector<uint64_t> prefix(n, 0);
    reverse(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
      prefix[i] += (prefix[i - 1] + a[i - 1]);
    }
    reverse(maxi.begin(), maxi.end());
    for (int i = 0; i < n; i++) {
      cout << maxi[i] + prefix[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}