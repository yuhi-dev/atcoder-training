#include <iostream>
#include <vector>
#include <stack>


int main() {
    // ビ太郎の行動回数
    int Q;
    std::cin >> Q;

    // 本を管理するスタック
    std::stack<std::string> bookStack;

    // 読んだ本の書名を保存するベクター
    std::vector<std::string> readBooks;

    for (int i = 0; i < Q; ++i) {
        std::string action;
        std::cin >> action;

        if (action == "READ") {
            // READの場合、スタックの一番上の本を取り出して出力
            if (!bookStack.empty()) {
                readBooks.push_back(bookStack.top());
                bookStack.pop();
            }
        } else {
            // 英小文字からなる文字列の場合、本を図書館から借りてスタックに積む
            std::string bookName;
            std::cin >> bookName;
            bookStack.push(bookName);
        }
    }

    // ビ太郎が読んだ本の書名を読んだ順番に出力
    for (auto it = readBooks.rbegin(); it != readBooks.rend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}