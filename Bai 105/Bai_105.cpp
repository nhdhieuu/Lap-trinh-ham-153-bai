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
	int t = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t += i;
		e = (float)1 / t;
		s += e;
		i ++;
	}
	return s;
}