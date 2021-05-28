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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the vector in non-increasing order in order for Chef to choose optimally
		sort(a.rbegin(), a.rend());
		long long chef = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				// if the number is in the even position (zero-based), then the stones will be
				// gathered by Chef
				chef += a[i];
			}
		}
		cout << chef << '\n';
	}
	return 0;
}
