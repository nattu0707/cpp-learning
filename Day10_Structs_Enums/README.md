# cpp-learning


【変更前】
enum Color{Red=0, Green, Blue, Black, White};
struct Car{
    string model;
    int year;
    Color color;

    void display(){
        cout<<"車のモデル"<<model;
        cout << "製造年: " << year << endl;
        cout << "色: " << colorToString(color) << endl; 
    }
};

string colorToString(Color c){
    switch (c) {
        case Red: return "赤";
        case Green: return "緑";
        case Blue: return "青";
        case Black: return "黒";
        case White: return "白";
        default: return "Unknown";
    }

}

【変更後】・colorToString 関数を先に宣言（string colorToString(Color c);）
【理由】・C++において関数が呼び出される前にその関数がどのように動作するかをコンパイラに伝えるため

// 列挙型 Color を定義
enum Color { Red = 0, Green, Blue, Black, White };

// Color を文字列に変換する関数の宣言
<span style="color:red">string colorToString(Color c);</span>

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
ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー
具体的には、以下の理由がある：
1. 関数の宣言
関数は通常、コンパイラに「この関数がどのような引数を受け取り、どんな結果を返すのか」を先に知らせておく必要がある。これを関数の宣言と呼びます。

変更前のプログラムでは、colorToString 関数を Car::display メンバ関数の中で使用していますが、display() のコードが colorToString を呼び出す段階ではまだその関数の定義が終わっていない。コンパイラは colorToString がどのような関数なのかを理解できていないので、エラーが発生する。

2. 関数の定義と宣言
C++ では関数が呼び出される前に、その関数の宣言をする必要がある。
関数宣言は、関数の名前、引数の型、戻り値の型を含んだ「プロトタイプ」として機能する。
関数の実際の定義はその後に来ても構わないが、宣言がないとコンパイラはその関数を正しく認識できない。

例えば、以下のように colorToString 関数を定義する前に宣言が必要です。

// colorToString関数の宣言
string colorToString(Color c);
その後、実際の関数定義（処理内容）を行います

// colorToString関数の定義
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
3. 宣言を追加した理由のまとめ
colorToString 関数を Car 構造体内の display() メンバ関数で使う前に、その存在をコンパイラに知らせる必要があったため。

関数が呼ばれる前に関数の宣言を行うことで、コンパイラはその関数が何であるかを理解し、エラーを回避できるようになります。

まとめ
このように、関数の定義がコード内で最初に使われる前に、その関数を使うことができるように関数の宣言を行う必要があります。







