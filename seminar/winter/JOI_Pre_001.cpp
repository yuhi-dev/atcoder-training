#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int>::iterator maxElementIterator = max_element(A.begin(), A.end());
    vector<int>::iterator minElementIterator = min_element(A.begin(), A.end());

    int maxElement = *maxElementIterator;
    int minElement = *minElementIterator;

    for (int i = 0; i < N; i++){
        int M = maxElement - A[i];
        int m = A[i] - minElement;
        if (M > m){
            cout << M << endl;
        }
        else{
            cout << m << endl;
        }
    }
    
    return 0;
}