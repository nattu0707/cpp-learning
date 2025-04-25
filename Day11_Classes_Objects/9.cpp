/*
==============================
📘 レストランの注文システム
📝 課題内容:
- MenuItem クラスを作成してください。
- 各メニューには「名前（string）」「価格（int）」「在庫数（int）」を持ちます。
- order() メソッドで注文処理（在庫があれば在庫を減らし、合計金額を返す）
- show() メソッドでメニュー情報を表示
- main関数でメニューを2つ作成し、複数回注文してみましょう。
- 合計金額の表示も忘れずに！

🎯 学習ポイント:
- クラスの基本構造（メンバ変数・コンストラクタ・メソッド）
- 条件分岐
- 値の返却（return）
- 複数オブジェクトの活用

🕒 日付: 2025-04-11
==============================
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MenuItem {
private:
    string name;
    int value;
    int stock;

public:
    MenuItem(string n, int v, int s) : name(n), value(v), stock(s) {}

    int order() {
        if (stock > 0) {
            stock--;
            cout << "現在の在庫は" << stock << "です" << endl;
            return value;
        } else {
            cout << "在庫がありません" << endl;
            return 0;
        }
    }

    void show(int index) {
        cout << index << ": " << name << " (" << value << "円, 在庫: " << stock << ")" << endl;
    }
};

int main(){
    vector<MenuItem> menu ={
        MenuItem("りんご", 130, 4),
        MenuItem("オレンジ", 100, 5),
        MenuItem("バナナ", 90, 3)
    };

    int total = 0;
    int choice;

    while(true){//while(true)　break文でループを抜けるまで繰り返す
        cout << "\n--- メニュー ---" << endl;
        for (int i = 0; i < menu.size(); ++i) {
            menu[i].show(i);
        }
        cout << "注文する商品番号を入力してください (-1で終了): ";
        cin >> choice;
    
        if (choice == -1) break;
        if (choice >= 0 && choice < menu.size()) {
            total += menu[choice].order();
        } else {
            cout << "無効な選択です。" << endl;
        }
    }

    cout << "\n🍽️ 合計金額: " << total << "円" << endl;
    return 0;
}
