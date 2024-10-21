#include<iostream>
using namespace std;
int main()
{
	int n, i = 0;
	do {
		cin >> n;
		i++;
	} while (n != 0);
	cout << i - 1;
	return 0;
}