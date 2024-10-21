#include <iostream>
using namespace std;
int main() {
	int n, a = 1;
	cin >> n;
	while (a <= n) {
		cout << a << " ";
		a *= 2;
	}
	return 0;
}