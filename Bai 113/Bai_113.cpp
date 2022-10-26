#include <iostream>
using namespace std;

int XuLy(int);

int main()
{
	int n;
	cin >> n;
	int kq = XuLy(n);
	cout << kq;
	return 0;
}

int XuLy(int n)
{
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}