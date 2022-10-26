#include <iostream>
using namespace std;
float XuLy();
int main()
{
	float kq = XuLy();
	cout << kq;
	return 0;
}
float XuLy()
{
	float s = 0;
	float e = 1;
	int i = 3;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s += e;
		i += 2;
	}
	return s;
}