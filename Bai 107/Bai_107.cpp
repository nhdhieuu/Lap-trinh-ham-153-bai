#include <iostream>
using namespace std;

float XuLy(float);

int main()
{
	float x;
	cin >> x;
	float kq = XuLy(x);
	cout << kq;
	return 0;
}

float XuLy(float x)
{
	float s = 1;
	float t =1;
	int m = 1;
	float e = 1;
	int dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t *= x * x;
		m *= i * (i - 1);
		e = t / m;
		s += dau * e;
		i += 2;
		dau = -dau;
	}
	return s;
}
