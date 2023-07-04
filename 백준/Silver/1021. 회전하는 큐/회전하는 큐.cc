#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	deque<int> DQ;
	int n, m,cnt=0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		DQ.push_back(i);
	}
	for (int i = 0; i < m; i++) {
		int val;
		cin >> val;
		int idx = find(DQ.begin(), DQ.end(), val) - DQ.begin();
		while (DQ.front() != val) {
			if (idx < DQ.size() - idx) {
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else {
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			cnt++;
		}
		DQ.pop_front();
	}
		cout << cnt;
}