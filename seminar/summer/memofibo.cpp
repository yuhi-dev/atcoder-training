#include <iostream>
#include <vector>
using namespace std;

//fibo(N)の答えをメモ化する配列
vector<long long> memo;

long long memofibo(int N){
    //ベースケース
    if (N == 0) return 0;
    else if (N == 1) return 1;

    //メモをチェック（素手の計算済みならば答えをリターンする）
    if (memo[N] != -1) return memo[N];

    //答えをメモ化しながら、再帰呼び出し
    return memo[N] = memofibo(N - 1) + memofibo(N - 2);
}

int main(){
    //メモ化用配列を -1 で初期化する
    memo.assign(50, -1);

    //fibo(49)を呼び出す
    memofibo(49);

    //memo[0], ..., memo[49]に答えが格納されている
    for (int N = 2; N < 50; ++N){
        cout << N << "項目:" << memo[N] << endl;
    }
}