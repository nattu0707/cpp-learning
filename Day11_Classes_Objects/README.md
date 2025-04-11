# cpp-learning
## Day 11 - クラスとオブジェクト（OOPの基礎）

### 学んだこと
- クラスとオブジェクトの違い
- コンストラクタとデストラクタ
- アクセス修飾子の使い方（public, private）
- メソッドの定義と呼び出し方

### サンプルコード
- `Student` クラスの定義と使い方
- `Circle` クラスでの面積計算
ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー

🎓 Day 11: クラスとオブジェクト（OOPの基礎）
✅ 1. クラスとオブジェクトの概念
・クラス（Class）: 設計図、テンプレート。
・オブジェクト（Object）: クラスをもとに作られた実体。

🧠 例えるなら…
クラス：クッキーの型
オブジェクト：その型で作られたクッキー

✅ 2. クラスの基本構文と例
#include <iostream>
using namespace std;

// クラスの定義
class Student {
public:
    string name;
    int age;

    // メソッド（関数）
    void introduce() {
        cout << "名前: " << name << ", 年齢: " << age << endl;
    }
};

int main() {
    // オブジェクトの生成
    Student s1;
    s1.name = "太郎";
    s1.age = 20;
    s1.introduce();  // 出力: 名前: 太郎, 年齢: 20

    return 0;
}

✅ 3. コンストラクタとデストラクタ
🔸 コンストラクタ（constructor）
オブジェクト生成時に自動で呼び出される特別な関数。

class Student {
public:
    string name;
    int age;

    // コンストラクタ
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void introduce() {
        cout << "名前: " << name << ", 年齢: " << age << endl;
    }
};
🔸 デストラクタ（destructor）
オブジェクトが削除されるときに呼ばれる。

~Student() {
    cout << name << "のメモリを解放します" << endl;
}

✅ 4. アクセス修飾子（public / private / protected）
修飾子	アクセス可能範囲
public	どこからでもアクセス可能
private	クラス内部からのみ
protected	クラスとその派生クラスから

class Test {
private:
    int secret = 123;

public:
    void show() {
        cout << "secret = " << secret << endl;
    }
};
✅ 5. メソッドとメンバ変数の使い方

class Circle {
public:
    double radius;

    double area() {
        return 3.14 * radius * radius;
    }
};

🔐 private を使うとき（基本はこれ！）
✅ 使う場面：
外部から勝手に触ってほしくない情報やロジック

内部でしか使わない「データ」や「関数」

🎯 目的：
データの保護（カプセル化）

変更の影響範囲を最小限に抑える

✅ 例：
cpp
コードをコピーする
class BankAccount {
private:
    int balance;  // 残高は外部から直接アクセスさせない！

public:
    void deposit(int amount) { balance += amount; }
    void showBalance() { cout << balance << endl; }
};
👉 balance を private にしておくことで、外部から balance = -10000 みたいな不正な変更を防げる！

🌐 public を使うとき
✅ 使う場面：
外部からアクセスさせたい関数・変数

「インターフェース（使い方）」として公開したいもの

🎯 目的：
オブジェクトの「外から操作するための手段」を提供する

✅ 例：
cpp
コードをコピーする
class Person {
private:
    string name;

public:
    void setName(string n) { name = n; }
    void introduce() { cout << "私は " << name << " です。" << endl; }
};
👉 setName() と introduce() は「外から使えるように」public にする！

🛡️ protected を使うとき（継承で使う！）
✅ 使う場面：
継承するクラスからはアクセスさせたいけど、外部からはアクセスさせたくないとき

🎯 目的：
サブクラスには「内部実装の一部」を使わせる

✅ 例：
cpp
コードをコピーする
class Animal {
protected:
    string species;

public:
    void setSpecies(string s) { species = s; }
};

class Dog : public Animal {
public:
    void bark() {
        cout << species << " が吠える！" << endl;  // OK: protected なので継承先から使える
    }
};
👉 species は外部からはアクセスできないけど、Dog からは使える！

🌟 まとめ（使い分けのルール）
修飾子	アクセス範囲	主な使いどころ
private	クラス内のみ	内部のデータやロジックの保護
public	どこからでもアクセス可	外部から操作させたいメソッドなど
protected	クラスとその派生クラスのみ	継承元から継承先に情報を渡したい時