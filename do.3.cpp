#include<iostream>
using namespace std;
int main()
{
	int n, x = 0;
	float i = 0;
	do {
		cin >> n;
		i += n;
		x++;
	} while (n != 0);
	cout << i / (x - 1);
	return 0;
}