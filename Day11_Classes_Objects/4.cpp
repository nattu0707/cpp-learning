/*
==============================
📘 商品の在庫管理
📝 課題内容:
- Product クラスを作成し、商品名（string）、価格（int）、在庫数（int）を管理します。
- display() メソッドで商品情報を表示
- sell() メソッドで在庫を1減らす。0の場合は「在庫切れ」と表示。
- main関数で商品を2つ生成し、販売処理を実行してみましょう。

🎯 学習ポイント:
- メソッド内の条件分岐
- 状態の更新

🕒 日付: 2025-04-11
==============================
*/
#include<iostream>
#include<string>
using namespace std;

class Product{
    private:
    string name;
    int value;
    int stock;

    public:
    Product(string n,int v,int s){
        name = n;
        value = v;
        stock = s;
    }

    void display(){
        cout<<"商品情報 名前:"<<name<<"価格"<<value<<"在庫数"<<stock<<endl;

    }
    
    void sell(){
        if (stock>0){
            stock --;
            cout<<name<<"を販売しました残り在庫"<<stock<<endl;
        }else {
            cout << name << " は在庫切れです。" << endl;
        }
    }
};

int main() {
    // 商品の作成
    Product item1("りんご", 150, 5);
    Product item2("バナナ", 120, 1);

    // 表示
    item1.display();
    item2.display();

    // 販売
    item1.sell();
    item1.sell();

    item2.sell();
    item2.sell();  // ここで在庫切れの処理が出る

    return 0;
}
