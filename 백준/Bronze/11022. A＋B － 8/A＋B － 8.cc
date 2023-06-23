#include <iostream>
using namespace std;

int main() {
	int N, a, b;
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}
}