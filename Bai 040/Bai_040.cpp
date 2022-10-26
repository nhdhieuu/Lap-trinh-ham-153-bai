#include <iostream>
using namespace std;

int Tong(int n)
{
	int s = 0;
	for (int i = 1;i <= n;i++)
		s += i*(i+1);
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << Tong(n);
	return 0;
}