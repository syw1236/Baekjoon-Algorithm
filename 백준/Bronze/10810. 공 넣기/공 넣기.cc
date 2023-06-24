#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M,i,j,k;
	cin >> N >> M;
	int* arr = new int[N]{0};
	for (int a = 0; a < M; a++) {
		cin >> i >> j >> k;
		for (int h = i-1; h <= j-1; h++) {
			arr[h] = k;
		}
	}
	for (int i = 0; i < N; i++) {
			cout << arr[i] << " ";
	}
	delete[] arr;
}