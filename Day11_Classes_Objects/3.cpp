/*
==============================
📘 銀行口座クラス
📝 課題内容:
- BankAccount クラスを作成してください。
- 所有者の名前（string）と残高（int）を持ちます。
- deposit(int amount) で入金
- withdraw(int amount) で出金（残高不足の場合はエラーメッセージ）
- showBalance() で口座情報を表示
- main関数で口座を操作してみましょう。

🎯 学習ポイント:
- クラスのメソッド設計
- 条件分岐とエラーハンドリング

🕒 日付: 2025-04-11
==============================
*/
#include <iostream>
using namespace std;

class BankAccount{
private:
    string name;
    int balance;
//🔒 private name: 口座所有者の名前 balance: 口座の残高（円）
//これらは private にしてあるので、クラスの外から直接アクセスできません。
//代わりに public なメソッドを通じて操作します。

    
public:
    
    BankAccount(string n, int amount) {
        name = n;
        balance = amount;
    }
//🚪 コンストラクタ🚪
//クラスのインスタンスを生成するときに自動で呼ばれる特別な関数。
//n は名前、amount は初期残高として渡されます

    //入金
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout <<name<<"さんが"<< amount << "円を入金しました。" << endl;
        } else {
            cout << "無効な金額です。" << endl;
        }
    }

    // 出金
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout <<name<<"さんが"<< amount <<"円を出金しました。" << endl;
        } else {
            cout << amount<<"円を出金するには残高不足です。" << endl;
        }
    }

   void showBalance(){
    cout<<name<<"さんの残額は"<<balance<<endl;
   }

};

int main() {
    BankAccount b1("Ryuki", 10000);
    BankAccount b2("Riku",5000);
    b1.showBalance();
    b2.showBalance();

    b1.deposit(11000);
    b1.withdraw(3000);
    b1.withdraw(20000); // 残高不足の例
    b1.showBalance();

    return 0;
}