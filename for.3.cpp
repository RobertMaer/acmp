#include <iostream>
using namespace std;
int main() {
	int k, n, m, i, d;
	cin >> k;
	for (i = 1; i <= k; i++) {
		cin >> n >> m;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		cout << d << endl;
	}
	return 0;
}