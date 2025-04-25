#include <iostream>
using namespace std;

class Dog {
private:
    string name;  // 属性
    int age;

public:
    // コンストラクタ
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    // メソッド（関数）
    void bark() {
        cout << name << "がワンワンと鳴きました!" << endl;
    }

    // メソッドで値を取得
    void showInfo() {
        cout << "犬の名前: " << name << ", 年齢: " << age << "歳" << endl;
    }
};

int main(){
    Dog dog1 ("ナッツ",14);
    dog1.bark();
    dog1.showInfo();
    return 0;
};