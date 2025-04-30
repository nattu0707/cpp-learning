#include<iostream>
#include<map>
#include<string>
using namespace std;

class Test {
public:
    void func1() {
        map<string, int> map1;
        for (int i = 0; i < 5; i++) {
            cout <<"名前を入力してください"<<endl;
            string str;
            cin >> str;
            map1[str]++; // ここで出現回数を＋1していく
        }

        // 出現回数を表示する
        for (auto p : map1) {
            cout << p.first << ": " << p.second << endl;
        }
    }
};

int main() {
    Test test;
    test.func1();
    return 0;
}
