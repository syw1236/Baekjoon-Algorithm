#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,score,sum=0,max = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score;
		sum += score;
		if (max < score)
			max = score;
	}
	cout << ((double)sum / max * 100) / n;
}