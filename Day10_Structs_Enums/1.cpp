/*
==============================
📘 メンバ関数をもつ構造体
📝 課題内容:
    - 「Rectangle」という構造体を作成
    - また、以下の2つのメンバ関数を定義してください。
    -area()：面積（幅 × 高さ）を返す
    -perimeter()：周囲長（2×(幅＋高さ)）を返す
    -これらの関数を利用して、長方形の面積と周囲長を表示するプログラムを作成してください
🎯 学習ポイント:
    - 構造体
    - メンバ関数
🕒 日付: 2025-04-10
==============================
*/
#include<iostream>
using namespace std;

struct Rectangle{
    double width;
    double height;
    
    double area(){
        return width * height;
    }
    double perimeter(){
        return 2 * (width + height);
    }
};

int main(){
    Rectangle rect;
    cout << "幅を入力してください";
    cin >> rect.width;
    cout <<"高さを入力してください";
    cin >> rect.height;
    cout <<"面積は"<<rect.area()<<endl;
    cout <<"周囲長は"<<rect.perimeter()<<endl;

}

