#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int input, min=101, sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> input;
		if (input % 2 != 0) {
			sum += input;
			if (min > input)
				min = input;
		}
	}
	if (sum == 0)
		cout << "-1";
	else {
		cout << sum << "\n" << min;
	}

	
}