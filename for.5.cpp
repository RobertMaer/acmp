#include <iostream>
using namespace std;
int main() {
	int k, m, i, j, ans;
	ans = 0;
	cin >> k;
	for (i = 1; i <= k; i++) {
		for (j = 1; j <= k; j++) {
			cin >> m;
			ans += m;
		}
	}
	cout << ans / 2;
	return 0;
}