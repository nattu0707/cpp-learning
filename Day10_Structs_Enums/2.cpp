/*
==============================
📘 列挙型を使った構造体
📝 課題内容:
- 学生の情報を管理する構造体「Student」を作成
- 以下のメンバ変数を含む
- name（文字列）
- age（整数）
- grade：学年を表すために列挙型 Grade を使用（選択肢は Freshman、Sophomore、Junior、Senior）
- ユーザーから名前、年齢、学年を入力（学年は数字 0〜3 で指定）し、構造体変数に保存して、結果を表示するプログラムを作成してください。
- ※必要に応じて、列挙型の値をわかりやすい文字列に変換するヘルパー関数も作成するとよい
。
🎯 学習ポイント:
- 構造体
- 列挙型
🕒 日付: 2025-04-10
==============================
*/
#include <iostream>
#include<string>
using namespace std;

enum grade{Freshman=0,Sophomore,Junior,Senior};
struct Student {
    string name;
    int age;
    grade Grade;
    //ミス　string grade;
};

string gradeToString(grade g){
    switch (g) {
        case Freshman: return "Freshman (1年生)";
        case Sophomore: return "Sophomore (2年生)";
        case Junior: return "Junior (3年生)";
        case Senior: return "Senior (4年生)";
        default: return "Unknown";
    }

}
//記述方法が分からず、意味もあまり分かっていない


int main() {
    int a;
    Student s;
    cout<<"名前、年齢、学年を入力"<<endl;
    cout<<"名前を入力"<<endl;
    getline(cin,s.name);
    //ミス　get　getline関数が出てこなかった
    
    cout<<"年齢を入力"<<endl;
    cin >> s.age;

    cout<<"学年を入力(0: Freshman, 1: Sophomore, 2: Junior, 3: Senior)"<<endl;
    cin >> a;
    s.Grade = static_cast<grade>(a);
    //ミス　Grade cingrade =　　入力を列挙型に変換は分かっていたが記述方法が分からなかった
    
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<gradeToString(s.Grade)<<endl;


    return 0;
}
