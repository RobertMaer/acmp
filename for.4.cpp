#include <iostream>
using namespace std;
int main() {
	int k, n, m, i, mx, ans;
	ans = -1;
	mx = 0;
	cin >> k;
	for (i = 1; i <= k; i++) {
		cin >> n >> m;
		if (m == 1 and n > mx) {
			mx = n;
			ans = i;
		}
	}
	cout << ans;
	return 0;
}