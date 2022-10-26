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
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = 3 * tt;
		pp = 7 * pp;
		ahh = 5 * at + 2 * tt -6 * pp + 12;
		at = ahh;
		i++;
	}
	return ahh;
}