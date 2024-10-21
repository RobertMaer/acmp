#include <iostream>
using namespace std;


int main()
{
	int n, i, x, y = 0, z = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> x;
		if (x == 1) {
			y++;
		}
		else {
			z++;
		}
	}
	if (y > z) {
		cout << z;
	}
	else {
		cout << y;
	}
	return 0;
}

