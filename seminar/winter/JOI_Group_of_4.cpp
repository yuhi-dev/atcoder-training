#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int A[75009], B[75009], C[75009], D[75009];

int solve(int LIMIT) {
	int pos1 = lower_bound(A + 1, A + N + 1, LIMIT) - A;
	int pos2 = lower_bound(B + 1, B + N + 1, LIMIT) - B;
	int pos3 = lower_bound(C + 1, C + N + 1, LIMIT) - C;
	int pos4 = lower_bound(D + 1, D + N + 1, LIMIT) - D;
	if (pos1 == N + 1 || pos2 == N + 1 || pos3 == N + 1 || pos4 == N + 1) return 2000000000;
	return max({ A[pos1], B[pos2], C[pos3], D[pos4] });
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int i = 1; i <= N; i++) cin >> B[i];
	for (int i = 1; i <= N; i++) cin >> C[i];
	for (int i = 1; i <= N; i++) cin >> D[i];

	sort(A + 1, A + N + 1);
	sort(B + 1, B + N + 1);
	sort(C + 1, C + N + 1);
	sort(D + 1, D + N + 1);

	int Answer = 2000000000;
	for (int i = 1; i <= N; i++) Answer = min(Answer, solve(A[i]) - A[i]);
	for (int i = 1; i <= N; i++) Answer = min(Answer, solve(B[i]) - B[i]);
	for (int i = 1; i <= N; i++) Answer = min(Answer, solve(C[i]) - C[i]);
	for (int i = 1; i <= N; i++) Answer = min(Answer, solve(D[i]) - D[i]);

	cout << Answer << endl;
	return 0;
}