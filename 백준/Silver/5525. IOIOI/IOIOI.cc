#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, cnt = 0;
	string str;
	int i = 0;
	cin >> n >> m >> str;
	for (int idx = 0; idx < m; idx++) {
		int k = 0;
		if (str[idx] == 'O')continue; 
		//처음 시작 'I'	
		while (str[idx + 1] == 'O' && str[idx + 2] == 'I') {//OI가 계속 이어나올 경우 k 증가
			k++; 
			if (k == n) { //k가 해당 n과 같을 경우 카운트 1증가
				cnt++;
				k--; //다음을 확인하기 위해 --해줌
			}
			idx += 2; //해당 인덱스 증가
		}
		
	}
	cout << cnt << '\n';
}