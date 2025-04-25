#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector <int> vec1;
vec1.push_back(19);
vec1.push_back(32);
vec1.push_back(4);
vec1.push_back(53);

vec1.insert(vec1.begin() + 1,25);
cout << "挿入後の要素:";
for(int num : vec1){
    cout << num<<"";
}
cout <<endl;

vec1.erase(vec1.begin()+2);
cout << "挿入後の要素:";
for(int num : vec1){
    cout << num<<"";
}

cout <<endl;


//find()、範囲内から指定された要素を探すために使用
//auto は、型を自動的に決めてくれるキーワード
//find() はイテレータ（位置情報）を返すので、auto を使うことでその型を自動で決めてくれます。
//つまり、it は vector の中の位置を指し示す「ポインタのようなもの」です。
auto it = find(vec1.begin(),vec1.end(),25);

//イテレータとは、C++における「ポインタに似たもの」で、コンテナ（vector や list など）の要素を順番に参照するためのものです。イテレータを使って、コンテナ内の要素にアクセスしたり、移動したりできます。

//find()の戻り値:
//見つかった場合、find() は対象の値を持つ要素の「位置」を指し示すイテレータを返します（例えば、nums.begin() + 2）。
//見つからなかった場合、find() はコンテナの終わりを示す nums.end() を返します。

if(it != vec1.end()){
    cout << "25はvector内に存在します"<<endl;
}else{
    cout<< "25はvector内に存在しません"<<endl;
}

// vectorが空かどうかをチェック
if (vec1.empty()) {
    cout << "vectorは空です。" << endl;
} else {
    cout << "vectorは空ではありません。" << endl;
}

return 0;
}