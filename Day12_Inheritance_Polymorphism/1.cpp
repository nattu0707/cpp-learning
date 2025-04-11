/*
==============================
📘 基本の継承：Student クラス
📝 課題内容:
- Person クラスに「名前」と「年齢」のメンバを作る
- Student クラスを Person から継承して、「学校名」を追加
- introduce() メソッドですべての情報を出力する

🎯 学習ポイント:
- 継承（class 子 : public 親）
- protected メンバの使い方
- 子クラスでの新しいメンバ追加

🕒 日付: 2025-04-11
==============================
*/
#include<iostream>
using namespace std;

// 親クラス
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

// 子クラス（Personを継承）
class Student : public Person {
private:
    string school;

public:
    Student(string n, int a, string s) : Person(n, a) {
        school = s;
    }

    void introduce() {
        cout << "名前: " << name << endl;
        cout << "年齢: " << age << "歳" << endl;
        cout << "学校名: " << school << endl;
    }
};

int main() {
    Student s("たろう", 18, "東京高校");
    s.introduce();

    return 0;
}