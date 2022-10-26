#include <iostream>
using namespace std;

float Tich(int n)
{
	float s = 1;
	for (int i = 1;i <= n;i++)
		s *= (1+(float)1/(i*i));
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << Tich(n);
	return 0;
}