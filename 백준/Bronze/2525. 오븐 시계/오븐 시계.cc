#include <iostream>
using namespace std;

int main() {
	int a, b,c;
	cin >> a >> b;
	cin >> c;
	int sum = b + c;
	if (sum > 59) {
		sum %= 60;
		a += ((b+c) / 60);
		if (a > 23)
			a %= 24;
	}
	
	cout << a << " " << sum;
}