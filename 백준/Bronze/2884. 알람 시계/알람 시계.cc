#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		m = 60 - 45 + m;
		h--;
		if (h < 0)
			h = 23;
	}
	else
		m = m - 45;
	cout << h << " " << m;
}