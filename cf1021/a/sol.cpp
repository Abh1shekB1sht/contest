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
    string s;
    cin >> s;
    vector<int> cnt(10, 0);
    for (int i = 0; i < 10; i++) {
      cnt[s[i] - '0']++;
    }
    string ans = "";
    for (int i = 0; i < 10; i++) {
      for (int d = 9 - i; d < 10; d++) {
        if (cnt[d]) {
          ans += to_string(d);
          cnt[d]--;
          break;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}