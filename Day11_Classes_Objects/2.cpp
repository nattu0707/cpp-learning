/*
==============================
📘 コンストラクタを使った初期化
📝 課題内容:
- 「Movie」クラスを作成し、タイトルと年をメンバとして持たせる。
- コンストラクタを用いてオブジェクト生成時に情報を設定する。
- 情報を出力する `show()` メソッドを実装する。

🎯 学習ポイント:
- コンストラクタ
- メンバ関数
🕒 日付: 2025-04-11
==============================
*/

#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    int year;

public:
    // コンストラクタ
    Movie(string t, int y) {
        title = t;
        year = y;
    }

    void show() {
        cout << "映画: " << title << "（" << year << "年）" << endl;
    }
};

int main() {
    Movie m("千と千尋の神隠し", 2001);
    m.show();

    return 0;
}