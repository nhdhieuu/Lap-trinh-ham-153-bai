#include <iostream>
using namespace std;

float Tong(int n) {
	float s = 0;
	for (int i = 1;i <= 2*n+1;i+=2)
		s += (float)i / i + 1;
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout << Tong(n);
	return 0;
}