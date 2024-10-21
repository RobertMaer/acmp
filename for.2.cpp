#include <iostream>
using namespace std;
int main() {
	int n, i, m, mx, mn;
	mx = 0;
	mn = 30001;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> m;
		if (m > mx) {
			mx = m;
		}
		if (m < mn) {
			mn = m;
		}
	}
	cout << mn << ' ' << mx;
	return 0;
}