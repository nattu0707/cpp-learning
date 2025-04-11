/*
==============================
📘 自己紹介クラス
📝 課題内容:
- Person クラスを作成してください。
- 名前（string）と年齢（int）をメンバとして持ちます。
- introduce() メソッドで「こんにちは、私は〇〇です。〇〇歳です。」と表示させてください。
- main関数で1人のオブジェクトを生成し、紹介メソッドを呼び出してください。

🎯 学習ポイント:
- クラスの基本構文
- メンバ変数とメソッドの使い方

🕒 日付: 2025-04-11
==============================
*/

#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void introduce() {
        cout << "名前: " << name << ", 年齢: " << age << endl;
    }
};

int main(){

    Person p1;
    p1.name = "taro";
    p1.age = 7;
    p1.introduce();

    return 0;
}