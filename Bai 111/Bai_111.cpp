#include <iostream>
using namespace std;
float XuLy();
int main()
{
	float kq = XuLy();
	cout << kq;
	return 1;
}

float XuLy()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i*(i+1)*(i+2));
		s += dau * e;
		i += 2;
		dau = -dau;
	}
	return s;
}