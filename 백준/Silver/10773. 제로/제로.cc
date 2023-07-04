#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k,sum=0;
	stack<int> S;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0) {
			sum -= S.top();
			S.pop();
		}
		else {
			sum += n;
			S.push(n);
		}
	}
	cout << sum;
}