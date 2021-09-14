#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		set<string> st;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			st.insert(s);
		}
		for (int i = 0; i <= n; i++) {
			int num = i;
			string bin = "";
			// convert number to binary
			while (num) {
				bin += to_string(num % 2);
				num /= 2;
			}
			reverse(bin.begin(), bin.end());
			// make it of length 'n'
			int cur = (int) bin.size();
			string res = string(n - cur, '0');
			res += bin;
			if (st.find(res) == st.end()) {
				cout << res << '\n';
				break;
			}
		}
	}
	return 0;
}
