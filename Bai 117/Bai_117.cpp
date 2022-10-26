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
	int att = -1;
	int at = 3;
	int tt = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5*tt+5 * at - att;
		att = at;
		at = ahh;
		i++;
	}
	return ahh;
}