/*
==============================
📘 複合的な構造体と列挙型の利用
📝 課題内容:
- 自動車の情報を管理するプログラムを作成してください。
- 列挙型「Color」を定義し、以下の色を用意します。
  - Red, Green, Blue, Black, White
- 「Car」という構造体を作成し、以下のメンバを含めます。
  - model（文字列）
  - year（整数）
  - color（Color 型）
- 構造体には、車の情報を表示するメンバ関数 display() を追加してください。
- ユーザーから車のモデル、製造年、および色（0〜4 の数値で入力）を受け取り、入力された情報を表示するプログラムを作成してください。
- ※ 色の数字を対応する列挙型に変換する処理も必要です。

🎯 学習ポイント:
- 構造体
- 列挙型
🕒 日付: 2025-04-10
==============================
*/

#include <iostream>
#include <string>
using namespace std;

enum Color{Red=0, Green, Blue, Black, White};

// Color を文字列に変換する関数の宣言
string colorToString(Color c);

struct Car{
    string model;
    int year;
    Color color;

    void display(){
        cout<<"車のモデル:"<<model<<endl;
        cout << "製造年: " << year << endl;
        cout << "色: " << colorToString(color) << endl; 
    }
};

string colorToString(Color c){
    switch (c) {
        case Red: return "赤";
        case Green: return "緑";
        case Blue: return "青";
        case Black: return "黒";
        case White: return "白";
        default: return "Unknown";
    }

}

int main(){
    int col;
    Car c;
cout<<"モデル名を入力してください"<<endl;
getline(cin,c.model);
//getline忘れ
cout<<"年式を入力してください"<<endl;
cin>>c.year;
cout<<"色を選択してください（Red=0, Green=1, Blue=2, Black=3, White=4）"<<endl;
cin>>col;
c.color=static_cast<Color>(col);

c.display();

return 0;
}