#include <iostream>
using namespace std;

void XuLy(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	XuLy(a, b);
	cout << a;
	cout << b;
	return 0;
}