#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second
int board[501][501];
int vis[501][501];
int dx[4]= {1,0,-1,0 }; //하,우,상,좌
int dy[4]= { 0,1,0,-1};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m,max_width = 0;
	queue<pair<int, int>>Q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	//vis[0][0] = 1;//시작점 표시
	//Q.push({ 0,0 });//큐에 시작점 넣음
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 1 || vis[i][j] == 1)continue;
			int width = 0;
			count++;
			vis[i][j] = 1;
			Q.push({ i,j });
			while (!Q.empty()) {//큐가 비지 않을 떄까지
				pair<int, int> cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {//가로 세로 확인
					int nx = cur.X + dx[i];
					int ny = cur.Y + dy[i];
					if (nx<0 || nx>n || ny<0 || ny>m) continue; //판의 범위를 넘어서는지 확인
					if (vis[nx][ny] || board[nx][ny] != 1)continue; //이미 방문한 것인지 or 보드판에서 1이 아닌것이라면 pass
					vis[nx][ny] = 1;
					Q.push({ nx,ny }); 
					
				}
				width++;
			}
			if (max_width < width)
				max_width = width;
		}
	}
	cout << count << '\n' << max_width;
}