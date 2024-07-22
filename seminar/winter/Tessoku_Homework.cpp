#include <iostream>
#include <algorithm>
using namespace std;

int N, A[69], B[69];
int Answer = 0;

int main(){
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    // 配列のソート(reverse関数は逆順にする関数)
    sort (A, A + N);
    sort (B, B + N);
    reverse (B, B + N);

    // 答えを出す
    for(int i = 0; i < N; i++){
        Answer += A[i] * B[i];
    }
    cout << Answer << endl;
    return 0;
}