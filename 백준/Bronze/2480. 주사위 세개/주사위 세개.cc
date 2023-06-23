#include <iostream>
using namespace std;

int main() {
	int num;
	int j = 0;
	int max = 0;
	int arr[7]={0};
	for (int i = 0; i < 3; i++) {
		cin >> num;
		if (max < num)
			max = num;
		arr[num]++;
	}
	for (j = 0; j < 7; j++) {
		if (arr[j] == 2) {
			cout << 1000 + (j * 100);
			break;
		}
		else if (arr[j] == 3) {
			cout << 10000 + (j * 1000);
			break;
		}
	}
	if (j == 7)
		cout << max * 100;

		
}