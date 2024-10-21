#include <iostream>
#include<cmath>
using namespace std;

main() {
	long long a, b, c, d;
	int x;
	cin >> a >> b >> c >> d;
	for (x = -100; x <= 100; x++) {
		if ((a * pow(x, 3) + b * pow(x, 2) + c * x + d) == 0)
			cout << x << " ";
	}
	return 0;
}