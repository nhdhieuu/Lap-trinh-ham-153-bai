#include <iostream>
using namespace std;

int XuLy(int n)
{
	return (n/10) % 10;
}

int main() {
	int n;
	cin >> n;
	cout << XuLy(n);
	return 0;
}
