#include <iostream>
using namespace std;

int XuLy(int n)
{
	return (n / 100) % 10;
}

int main() {
	int n;
	cin >> n;
	cout << XuLy(n);
	return 0;
}
