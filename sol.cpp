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
		vector<string> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<string> vec;
		for (int i = 0; i < n; i++) {
			// create strings out of characters from the columns of the ('n' x 'n') 2D-array
			string temp = "";
			for (int j = 0; j < n; j++) {
				temp += string(1, a[j][i]);
			}
			vec.push_back(temp);
		}
		// don't forget to add the 'n'-length string containing only 1's and only 0's
		vec.push_back(string(n, '0'));
		vec.push_back(string(n, '1'));
		// find the string that is different from all the given strings
		string ans = "";
		for (auto& e : vec) {
			bool checker = true;
			for (int i = 0; i < n; i++) {
				if (e == a[i]) {
					checker = false;
					break;
				}
			}
			if (checker) {
				ans = e;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
