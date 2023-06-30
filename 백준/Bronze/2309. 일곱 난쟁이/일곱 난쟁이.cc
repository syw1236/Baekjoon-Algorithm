#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0, arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 9);//미리 정렬
	for (int j = 0; j < 8; j++) {
		int total = sum;
		for (int k = j + 1; k < 9; k++) {
			
			total = total - arr[j] - arr[k];
			if (total == 100) {
				for (int z = 0; z < 9; z++) {
					if (z != j && z != k)
						cout << arr[z] << "\n";
				}
				return 0;
			}
			total = sum;
		}
	}

}