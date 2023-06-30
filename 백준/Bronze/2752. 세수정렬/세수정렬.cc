#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int d, e, f;
	d = max({ a,b,c });
	e = min({ a,b,c });
	f = a + b + c - d - e;
	cout << e << " " << f << " " << d;
}