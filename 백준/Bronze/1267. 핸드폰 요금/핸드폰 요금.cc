#include <iostream>
using namespace std;

void yM(int t,int& Y) { //영식
	int n = t/30;
	if (t < 30)
		Y += 10;
	else
		Y += (n * 10)+10;
}
void mM(int t,int& M) { //민식
	int n = t / 60;
	if (t < 60)
		M += 15;
	else
		M += (n * 15) + 15;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t,Y=0,M=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		yM(t,Y);
		mM(t,M);
	}
	if (Y > M)
		cout << "M " << M;
	else if (Y < M)
		cout << "Y " << Y;
	else
		cout << "Y M " << Y;
}