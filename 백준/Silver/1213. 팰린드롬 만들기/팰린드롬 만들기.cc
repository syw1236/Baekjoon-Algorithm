#include <iostream>
using namespace std;

int alpha[26];
string ans;

void add_alpha(int idx) {
	int alpha_cnt = alpha[idx]/2;
	for (int idx_add = 1; idx_add <= alpha_cnt; idx_add++) {
		ans += idx + 'A';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int odd=0;
	int  mid = -1;
	string name;
	cin >> name;
	for (auto c : name) {
		alpha [c-'A'] ++;
	}

	for (int idx = 0; idx <26; idx++) {
		if (alpha[idx] > 0) {
			if (alpha[idx] % 2 == 1) {				
				mid = idx; //중간에 둘 알파벳
				alpha[idx]--;
				odd++;
			}
		}
	}
	if (odd >= 2) {//홀수개가 2개 이상
		ans = "I'm Sorry Hansoo";
	}
	else {
		for (int idx = 0; idx <26; idx++) {
			if (alpha[idx] % 2 == 0) {
				add_alpha(idx);				
			}
		}
		if (mid != -1) {
			ans += mid+'A';
		}
		for (int idx = 25; idx >= 0; idx--) {
			if (alpha[idx]%2==0) {
				add_alpha(idx);
			}
		}
	}
	cout << ans;

}