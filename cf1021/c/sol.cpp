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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<pair<int, int>> b;
    int beg = 0;
    while (beg < n) {
      int end = beg;
      while (end + 1 < n && a[end + 1] == a[end]) {
        end += 1;
      }
      b.emplace_back(a[beg], end - beg + 1);
      beg = end + 1;
    }
    n = int(b.size());
    bool win = false;
    for (int i = 0; i < n; i++) {
      if (b[i].second >= 4) {
        win = true;
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      if (b[i].second > 1) {
        for (int j = i + 1; j < n; j++) {
          if (b[j].first - b[j - 1].first > 1) {
            break;
          }
          if (b[j].second == 1) {
            continue;
          }
          win = true;
          break;
        }
      }
    }
    cout << (win ? "YES" : "NO") << '\n';
  }
  return 0;
}