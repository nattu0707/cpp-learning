#include<iostream>
#include<map>
using namespace std;

int main() {
    // 文字列をキー、整数を値とするmapを作成
    map<string, int> fruitMap;

    // データを挿入
    fruitMap.insert({"apple", 5});
    fruitMap.insert({"banana", 3});
    fruitMap.insert({"cherry", 7});
    fruitMap["date"] = 2;  // []演算子を使っても挿入可能

     // 特定のキー "apple" の値を表示
     cout << "apple の値: " << fruitMap["apple"] << endl;

     // "banana" の値を表示（findを使って検索）
    auto it = fruitMap.find("banana");
    if (it != fruitMap.end()) {
        cout << "banana の値: " << it->second << endl;//mapの各要素はキーと値のペア　firstとsecondの2つの値を持っている
    } else {
        cout << "banana は存在しません" << endl;
    }

    // すべてのキーと値を表示
    cout << "すべてのフルーツとその数：" << endl;
    for (const auto& pair : fruitMap) {
        cout << "キー: " << pair.first << ", 値: " << pair.second << endl;
    }

    return 0;
}
