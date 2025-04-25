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
#include<iostream>
#include<string>
using namespace std;

class MenuItem{
    private:
    string name;
    int value;
    int stock;

    public:
    MenuItem(string n,int v,int s){
        name = n;
        value = v;
        stock = s;
    };

    int order(){
        if(stock>0){
            stock --;
            cout <<"現在の在庫は"<<stock<<"です"<<endl;
            return value;
        }else{
            cout << "在庫がありません"<<endl;
            return 0;
        }
    }
    void show(){
        cout <<"商品名:"<<name<<"価格:"<<value<<"在庫:"<<stock<<endl;
    }
};
int main(){
    MenuItem apple("りんご",130,4);
    MenuItem orange("オレンジ",100,5);

    apple.order();
    apple.order();
    apple.order();
    apple.order();
    apple.show();
}