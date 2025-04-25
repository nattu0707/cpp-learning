/*
==============================
📘 レストランの注文システム（拡張版）
📝 課題内容:
- MenuItem クラスを作成してください。
- 各メニューには「名前（string）」「価格（int）」「在庫数（int）」を持ちます。
- order() メソッドで注文処理（在庫があれば在庫を減らし、金額を返す）
- show() メソッドでメニュー情報を表示
- 複数の商品を vector<MenuItem> で管理します。
- ユーザーに商品名を入力させ、該当の商品を注文できるようにします。
- ユーザーが "q" を入力するまで注文を繰り返します。
- 最後にすべての注文の合計金額を表示してください。

🎯 学習ポイント:
- クラス設計とメソッドの使い方
- vector を使った複数オブジェクトの管理
- ループと条件分岐、文字列処理
- return で値を返す仕組み

🕒 日付: 2025-04-11
==============================
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MenuItem {
private:              //開発者間のルール！書き換えないように示すためのもの
    string name;
    int value;
    int stock;

public:
    MenuItem(string n, int v, int s) {//コンストラクタ 
        name = n;
        value = v;
        stock = s;
    }

    int order() {
        if (stock > 0) {
            stock--;
            cout << name << " を注文しました。残り在庫: " << stock << endl;
            return value;
        } else {
            cout << name << " は在庫切れです。" << endl;
            return 0;
        }
    }

    void show() {
        cout << "商品名: " << name << " | 価格: " << value << "円 | 在庫: " << stock << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    vector<MenuItem> menu = {
        MenuItem("りんご", 100, 2),
        MenuItem("バナナ", 150, 3)
    };

    int total = 0;
    string input;

    cout << "🍴 メニュー一覧 🍴" << endl;
    for (int i = 0; i < menu.size(); ++i) {
        menu[i].show();
    }

    cout << "\n注文したい商品名を入力 (終了するには q を入力）:" << endl;

    while (true) {
        cout << "👉 注文 > ";
        cin >> input;

        if (input == "q") {
            break;
        }

        bool found = false;
        for (int i = 0; i < menu.size(); ++i) {
            if (menu[i].getName() == input) {
                total += menu[i].order();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "その商品はメニューにありません。" << endl;
        }
    }

    cout << "\n🧾 合計金額: " << total << "円" << endl;

    return 0;
}
