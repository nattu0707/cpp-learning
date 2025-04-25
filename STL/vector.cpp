#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vectorの作成と初期化
    vector<int> vec1;
    
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(40);

    //すべての要素を表示
     //範囲ベースの for ループ（range-based for loop）
     //このループは、vectorの各要素を順番に取り出して処理するために非常に便利な方法です
    cout << "初期の要素:" << endl;
    for(int num : vec1){  
        cout << num <<" ";
    }
    cout << endl;
    //int num：vector<int> の各要素が順番に num という変数に格納されます。つまり、vec1 の最初の要素が num に代入され、次に2番目の要素が代入され、...といった具合に進んでいきます。
    //vec1：これはループ対象の vector<int> 
    //vec1 の各要素を一つずつ取り出して num に代入し、処理（この場合は cout で表示）を行います。

    vec1.erase(vec1.begin()+1);

    cout <<"二番目の要素を削除後"<<endl;
    for(int num : vec1){
        cout << num <<" ";   
    }
    cout << endl;
     // 要素数、最初の要素、最後の要素を表示
     cout << "要素数: " << vec1.size() << endl;
     cout << "最初の要素: " << vec1.front() << endl;
     cout << "最後の要素: " << vec1.back() << endl;
 
     return 0;
}
