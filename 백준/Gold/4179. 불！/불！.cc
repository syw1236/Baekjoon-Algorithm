#include <iostream>
#include <queue>
#include<utility>
#include <algorithm>
using namespace std;

#define X first
#define Y second
string board[1001];
int fire[1001][1001]; //불의 전파 시간
int per[1001][1001];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	queue<pair<int, int>> Q1;
	queue<pair<int, int>> Q2;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];	
	}
	//벽들은 -1로 표시
	for (int i = 0; i < n; i++) {
		fill(fire[i], fire[i] + m, -1);
		fill(per[i], per[i] + m, -1);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'F') {
				Q1.push({ i,j });
				fire[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				Q2.push({ i,j }); 
				per[i][j] = 0;
			}
		}
	}
	//불에 대한 거리를 구해줌
	while (!Q1.empty()) {
		auto cur = Q1.front(); Q1.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (board[nx][ny] == '#' || fire[nx][ny] >= 0)continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q1.push({ nx,ny });
		}
	}
	
	//지훈이에 대한 거리를 구해줌
	while (!Q2.empty()) {
		auto cur = Q2.front(); Q2.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {//범위를 벗어났다는 것은 탈출에 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨
				cout << per[cur.X][cur.Y]+1;
				return 0;
			}
			if (per[nx][ny] >= 0 || board[nx][ny]=='#')continue; 
			if (fire[nx][ny] != -1 && fire[nx][ny] <= per[cur.X][cur.Y] + 1)continue;
			//지훈이는 자신이 도착한 시간과 동시에 불이 도착하거나 혹은 자신보다 더 빨리 불이 도착하는 자리로는 갈 수 없음
			per[nx][ny] = per[cur.X][cur.Y] + 1;
			Q2.push({ nx,ny });
		}
	}
	cout << "IMPOSSIBLE";
}