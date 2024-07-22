#include <iostream>
using namespace std;
int main(){
    int A;
    cin >> A;
    int B;
    cin >> B;
    if(A < B){
        cout << -1 << endl;
    }
    if(A == B){
        cout << 0 << endl;
    }
    if(A > B){
        cout << 1 << endl;
    }
    return 0;
}