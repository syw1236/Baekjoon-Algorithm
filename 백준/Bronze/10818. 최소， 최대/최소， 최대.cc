#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,num,a,b;
	ios_base::sync_with_stdio(false);
	int maxValue = -1000001;
	int minValue = 1000001;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		 a = max(num, maxValue);
		 maxValue = a;
		 b = min(num, minValue);
		 minValue = b;
	}
	cout << b << " " << a;
}