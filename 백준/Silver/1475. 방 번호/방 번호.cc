#include <iostream>
#include <algorithm>
using namespace std;
int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count = 0;;
	cin >> n;
	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		count = max(count, arr[i]);
	}
	count = max(count, (arr[6] + arr[9] + 1) / 2); //(arr[6]+arr[9])/2를 올림한 값이 6,9에 대한 필요한 세트의 수이므로 (arr[6]+arr[9]+1)/2을 계산
	cout << count;
}