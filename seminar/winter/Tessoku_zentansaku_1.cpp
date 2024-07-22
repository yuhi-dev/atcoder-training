// N 個の整数 A の中に,整数 X が含まれているかどうかを判定する.
#include <iostream>
using namespace std;

int N, X, A[109];
bool Answer = false;

int main(){
    // 入力
    cin >> N >> X;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    // 全探索 (変数 Answer は「既に x が見つかったかどうか」を表す)
    for (int i = 0; i < N; i++){
        if (A[i] == X) Answer = true;
    }

    // 出力
    if (Answer == true) {
        cout << "Yes" << endl;
    }    
    else {
        cout << "No" << endl;
    }    
    return 0;
}