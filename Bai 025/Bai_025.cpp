#include <iostream>
using namespace std;

void XuLy(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
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