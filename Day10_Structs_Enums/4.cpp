#include <iostream>
#include <string>
using namespace std;

// 列挙型 Color を定義
enum Color { Red = 0, Green, Blue, Black, White };

// Color を文字列に変換する関数の宣言
string colorToString(Color c);

// 車の情報を管理する構造体
struct Car {
    string model;  // 車のモデル名
    int year;      // 車の製造年
    Color color;   // 車の色（列挙型 Color）

    // 車の情報を表示するメンバ関数
    void display() {
        cout << "車のモデル: " << model << endl;
        cout << "製造年: " << year << endl;
        cout << "色: " << colorToString(color) << endl; // colorToStringを呼び出し
    }
};

// 列挙型 Color を文字列に変換する関数
string colorToString(Color c) {
    switch (c) {
        case Red: return "赤";
        case Green: return "緑";
        case Blue: return "青";
        case Black: return "黒";
        case White: return "白";
        default: return "不明";
    }
}

int main() {
    int col;    // 色の番号を格納する変数
    Car c;      // Car 型の変数

    // 車のモデルを入力
    cout << "車のモデルを入力してください: ";
    getline(cin, c.model);  // getline を使って文字列を入力

    // 製造年を入力
    cout << "製造年を入力してください: ";
    cin >> c.year;

    // 色を入力（0〜4の番号で色を選択）
    cout << "色を選んでください (0: 赤, 1: 緑, 2: 青, 3: 黒, 4: 白): ";
    cin >> col;
    c.color = static_cast<Color>(col);  // 数値を列挙型 Color に変換

    // 車の情報を表示
    c.display();

    return 0;
}
