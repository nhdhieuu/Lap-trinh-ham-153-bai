#include <iostream>
using namespace std;

float XuLy(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x2 * x4;
	float x12 = x6 * x6;
	return x12;
}

int main()
{
	float x;
	cin >> x;
	cout << XuLy(x);
	return 0;
}
