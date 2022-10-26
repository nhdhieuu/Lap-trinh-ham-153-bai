#include <iostream>
using namespace std;

float XuLy(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16*x16;
	return x32;
}

int main()
{
	float x;
	cin >> x;
	cout << XuLy(x);
	return 0;
}
