#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a * b;
	while (b %= a) {
		swap(a, b);
	}
	cout << c / a;
	return 0;
}