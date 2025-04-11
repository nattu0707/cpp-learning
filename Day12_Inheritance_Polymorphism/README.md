【継承（Inheritance）の基本構文】

class Animal {
public:
    void eat() {
        cout << "食べてます🍽️" << endl;
    }
};

// Animal を継承する Dog クラス
class Dog : public Animal {
public:
    void bark() {
        cout << "ワン！🐶" << endl;
    }
};
📝 ポイント

Dog は Animal の機能（eat()）をそのまま使える。

再利用性UP、コード量が減る。

【オーバーライドとポリモーフィズム（Polymorphism）】
class Animal {
public:
    virtual void speak() {
        cout << "何かが鳴いてる…" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "ワンワン！" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "ニャー！" << endl;
    }
};

void makeItSpeak(Animal* a) {
    a->speak(); // 実際のオブジェクトの speak() を呼び出す（動的バインディング）
}
📝 ポイント

virtual キーワードで「このメソッドはオーバーライドされるかも」と宣言。

実行時にオブジェクトの種類に応じて正しい関数が呼び出される（ポリモーフィズム）。

Animal* 型で扱えるから拡張しやすい！

【仮想関数（Virtual Function）の使い方】
class Shape {
public:
    virtual void draw() {
        cout << "形を描くよ🖌️" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "○ を描きます" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "□ を描きます" << endl;
    }
};
📝 ポイント

virtual を使うと、親クラスのポインタで子クラスのメソッドを呼べる。

これが「動的バインディング」＝ポリモーフィズムのカギ！

まとめ表
概念	         目的	             書き方	                        メリット
継承	         機能を引き継ぐ	      class 子 : public 親	    コードの再利用、管理が簡単
オーバーライド　  同名関数の上書き	   void func() override	     子ごとに別の動作が可能
ポリモーフィズム　同じ型で異なる動作   virtual + ポインタ	      拡張性・柔軟性が高い
仮想関数	     動的に関数を選ぶ	  virtual void	            実行時に適切な動作選択
