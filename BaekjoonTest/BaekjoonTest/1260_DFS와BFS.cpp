#include <iostream>
#include <queue>

using namespace std;

int a;
int b;
int c;



//int N, M, V;
//int one, two;
//int arr[1001][1001];
//bool isVisited[1001];
//
//void input() {
//	cin >> N >> M >> V;
//	for (int i = 0; i < M; i++) {
//		cin >> one >> two;
//		arr[one][two] = 1;
//		arr[two][one] = 1;
//	}
//}
//
///* isVisit �Լ��� DFS ���Ŀ� false�� Reset */
//void reset_visit() {
//	for (int i = 1; i <= N; i++) {
//		isVisited[i] = false;
//	}
//}
//
///* DFS isVisit �Լ� Ȯ�� �� ����Լ��� ���� */
//void dfs(int start) {
//	cout << start << " ";
//	isVisited[start] = true;
//
//	for (int i = 1; i <= N; i++) {
//		if (i == start) {
//			continue;
//		}
//		else {
//			if (!isVisited[i] && arr[start][i] == 1 && arr[i][start] == 1) {
//				dfs(i);
//			}
//		}
//	}
//}
//
///* BFS �Լ� queue ����Ͽ� ���� */
//void bfs(int start) {
//	queue<int> q;
//	q.push(start);
//	isVisited[start] = true;
//
//	while (!q.empty()) {
//		int q_front = q.front();
//		q.pop();
//		cout << q_front << " ";
//
//		for (int i = 1; i <= N; i++) {
//			if (i == q_front) {
//				continue;
//			}
//			else {
//				if (!isVisited[i] && arr[q_front][i] == 1 && arr[i][q_front] == 1) {
//					q.push(i);
//					isVisited[i] = true;
//				}
//			}
//		}
//	}
//}

void DFS��BFS_1260()
{
	//input();
	//dfs(V);
	//reset_visit();      // DFS ���� isVisited �迭 false�� �ʱ�ȭ
	//cout << "\n";
	//bfs(V);
}