#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second
string board[101];
int vis[101][101];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int rgbArr[3];
int rgArr[3];
int t;
void rgb(int i, int j,queue<pair<int,int>>&Q,int arr[]) {
	char cur_char;
	cur_char = board[i][j];
	if (cur_char == 'R')arr[0]++;
	if (cur_char == 'G')arr[1]++;
	if (cur_char == 'B')arr[2]++;
	vis[i][j] = 1;
	Q.push({ i,j });
	while (!Q.empty()) {
		auto c = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = c.X + dx[i];
			int ny = c.Y + dy[i];
			if (nx < 0 || nx >= t || ny < 0 || ny >= t)continue;
			if (vis[nx][ny] == 1 || board[nx][ny] != board[c.X][c.Y])continue;
			vis[nx][ny] = 1;
			Q.push({ nx,ny });
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>>Q;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if (vis[i][j] == 0) {
				rgb(i, j, Q,rgbArr);
			}
		}
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if (board[i][j] == 'G')
				board[i][j] = 'R';
			vis[i][j] = 0;
		}
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if(vis[i][j]==0)
				rgb(i, j, Q,rgArr);
		}
	}
	cout << rgbArr[0] + rgbArr[1] + rgbArr[2] << '\n' << rgArr[0] + rgArr[2];
}