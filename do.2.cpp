#include<iostream>
using namespace std;
int main()
{
	int n, i = 0;
	do {
		cin >> n;
		i += n;
	} while (n != 0);
	cout << i;
	return 0;
}