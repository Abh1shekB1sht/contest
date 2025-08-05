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
    string test;
    cin >> test;
    if (n == 2 || test[0] == test[n - 1]) {
      cout << (test[0] == 'A' ? "Alice" : "Bob") << '\n';
      continue;
    }
    if (test[n - 1] == 'B') {
      bool win = false;
      for (int i = 1; i < n - 1; i++) {
        if (test[i] == 'B') {
          win = true;
          break;
        }
      }
      if (win) {
        cout << "Bob" << '\n';
      }
      else {
        cout << "Alice" << '\n';
      }
    }
    else {
      int j = n - 2;
      bool win = false;
      while (test[j] != 'A') {
        if (test[j] == 'B') {
          win = true;
          break;
        }
      }
      if (win) {
        cout << "Bob" << '\n';
      }
      else {
        cout << "Alice" << '\n';
      }
    }
  }
  return 0;
}