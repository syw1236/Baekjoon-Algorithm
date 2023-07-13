#include <iostream>
#include <string>
using namespace std;

string str;
int check_Palindrome(int left, int right,bool check){
	while (left < right) {
		if (str[left] != str[right]) {//비교하는 문자가 같지 않을 때
			if (check) {
				if (check_Palindrome(left + 1, right,false) == 0 || check_Palindrome(left, right - 1,false) == 0) {//그 앞의 문자와 각각 비교
					return 1;
				}
			}
			return 2;
		}
		//비교하는 문자가 같을 때
		left++;
		right--;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,ans;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> str;
		ans = check_Palindrome(0,str.size()-1,true);
		cout << ans << '\n';
	}
	

}