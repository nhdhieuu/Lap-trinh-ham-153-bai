#include <iostream>
using namespace std;

float XuLy(float x, int n)
{
	int t = 1;
	for (int i = 1;i <= n;i++)
		t *= x;
	return t;
}
int main()
{
	float x;
	int n;
	cin >> x >> n;
	cout << XuLy(x, n);
	return 0;
}