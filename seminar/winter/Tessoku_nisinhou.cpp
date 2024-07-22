// 整数 N が10進法で与えられる. N を2進法に変換した値を出力する.
#include <iostream>
using namespace std;

int main(){
    // 入力
    int N;
    cin >> N;

    // 上の桁から順に「2進法に変換した値を求める」
    for (int x = 9; x >= 0; x--){
        int wari = (1 << x);
        cout << (N / wari) % 2;
    }
    cout << endl;
    return 0;
}