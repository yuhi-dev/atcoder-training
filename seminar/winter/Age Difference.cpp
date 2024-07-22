#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    
    int max = *max_element(begin(A), end(A));
    int min = *min_element(begin(A), end(A));

    for (int i = 0; i < N; i++){
        int maxans = max - A.at(i);
        int minans = A.at(i) - min;
        if (maxans > minans){
            cout << maxans << endl;
        }
        else {
            cout << minans << endl;
        }
    }
    return 0;
}