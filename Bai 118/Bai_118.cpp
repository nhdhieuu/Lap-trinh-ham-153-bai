#include <iostream>
using namespace std;

float XuLy(int);

int main()
{
	int n;
	cin >> n;
	float kq = XuLy(n);
	cout << kq;
	return 0;
}

float XuLy(int n)
{
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		ahh =  (-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return ahh;
}