#include <iostream>
using namespace std;

int func(int N){
    //再帰関数を呼び出したことを報告する
    cout << "func(" << N << ")を呼び出しました" << endl;

    if (N == 0) return 0;

    //再帰的に答えを求めて出力する
    int result = N + func(N - 1);
    cout << N << "までの和 = " << result << endl;
    
    return result;
}

int main(){
    func(5);
}


//再帰関数のテンプレート
//(戻りの値の型) func(引数){
//  if (ベースケース){
//      return ベースケースに対する値；
//  }
//再起呼び出しを行います
//  func(次の引数)；
//  return 答え；    
//}