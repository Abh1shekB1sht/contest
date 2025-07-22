/**
  *  AUTHOR:    unix
  *  CREATED:   22.07.2025 17:15:08
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
		string s;
		cin >> n >> s;
		vector<int> ch(26, 0);
		for (int i = 0; i < n; i++) {
			ch[s[i] - 'a']++;		
		}

	}
	return 0;
}