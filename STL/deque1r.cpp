#include<iostream>
#include<deque>
#include<string>
using namespace std;

class Test {
public:
    void func() {
        deque<string> deq1;
        while (true) {
            string command;
            string value;

            cout << "コマンドを入力してください（先頭に追加: F, 末尾に追加: B, 終了: END）: ";
            cin >> command;

            if (command == "END") {
                break; // 終了条件を最初に処理することで無駄な処理を防ぐ
            } else if (command == "F") {
                cout << "先頭に入れたい文字列を入力: ";
                cin >> value;
                deq1.push_front(value);  // 正しく先頭に追加
            } else if (command == "B") {
                cout << "末尾に入れたい文字列を入力: ";
                cin >> value;
                deq1.push_back(value);   // 正しく末尾に追加
            } else {
                cout << "不正な入力です。F, B, END のいずれかを入力してください。" << endl;
                continue; // 無効な入力は無視して再入力を促す
            }

            // 現在のdequeの中身を表示
            cout << "[現在のdeque内容]: ";
            for (const auto& item : deq1) {
                cout << item << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Test test;
    test.func();
    return 0;
}
