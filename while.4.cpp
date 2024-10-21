#include <iostream>
using namespace std;
main() {
	int n;
	cin >> n;
	if (n > 0)
	{
		while (n % 2 == 0) {
			n /= 2;
		}
		if (n > 1) {
			cout << "NO";
		}
		else cout << "YES";
	}
	else cout << "NO";
	return 0;
}