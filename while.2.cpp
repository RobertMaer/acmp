#include <iostream>
using namespace std;
int main() {
	int n, a = 2;
	cin >> n;
	while (a <= n) {
		if (n % a == 0) {
			cout << a;
			break;
		}
		a++;
	}
	return 0;
}