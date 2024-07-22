#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    stack<string> S;
    stack<string> readed;
    for (int i = 0; i < Q; i++){
        string books;
        cin >> books;
        if (books == "READ"){
            readed.push(S.top());
            S.pop();
        }
        else {
            S.push(books);
        }
    }

    stack<string> readbooks;

    while (!readed.empty()) {
        readbooks.push(readed.top());
        readed.pop();
    }
    
    while (!readbooks.empty()) {
        std::cout << readbooks.top() << " " << endl;
        readbooks.pop();
    }

    return 0;
}