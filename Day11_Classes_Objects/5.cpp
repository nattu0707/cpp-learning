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

class MenuItem {
    private:
    string name;
    int value;
    int stock;

    //ミス　コンストラクタはclass文内に記述する
    public:
MenuItem(string n,int v,int s){
    name = n;
    value = v;
    stock = s;
}

int order(){
    if(stock>0){
        stock --;
        cout<<name<<"を注文。"<<"現在の在庫は:"<<stock<<endl;
        return value;
    }else{
        cout<<"現在の在庫は:"<<stock<<"で在庫が足りません"<<endl;
    return 0;
    }
}

void show(){
    cout<<"商品名は"<<name<<"価格は"<<value<<"在庫数は"<<stock<<endl;
}

};

int main(){
    MenuItem banana("バナナ",150,3);
    MenuItem apple("りんご",100,2);
    apple.show();
    banana.show();

    int total = 0;

    total += apple.order();  // 1回目の注文
    total += apple.order();  // 2回目の注文
    total += apple.order();  // 3回目の注文（在庫切れ）
    cout <<"合計金額は"<<total;


    return 0;
}