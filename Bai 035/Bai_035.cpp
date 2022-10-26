#include <iostream>
using namespace std;

int Tich(int n)
{
	int t = 1;
	for (int i = 1;i <= n; i++)
		t *= i;
	return t;
}

int main()
{
	int n;
	cin >> n;
	cout << Tich(n);
	return 0;
}