#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	for (int i = 0; i < 3; i++) {
		int zero = 0, one = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a;
			if (a == 0) zero++;
			else one++;
				
		}
		if (zero == 1 && one == 3)cout << "A";
		else if (zero == 2 && one == 2)cout << "B";
		else if (zero == 3 && one == 1)cout << "C";
		else if (zero == 4)cout << "D";
		else cout << "E";
		cout << "\n";
	}
}