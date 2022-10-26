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
	float s = 1;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t *= i;
		e = (float)1/t;
		s += e;
		i += 1;
	}
	return s;
}
