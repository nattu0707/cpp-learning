#include<iostream>
#include<map>
using namespace std;

int main(){

map<string,int> studentScores;
string name;
int num;

cout << "学生の名前と点数を入力してください（終了は '終了' と入力）:" << endl;
while(true){
    cout <<"名前:";
    cin >>name;

    if (name == "終了") {
        break;  // '終了' と入力されたら入力終了
    }

    cout << "点数: ";
    cin >> num;

    // mapに学生名と点数を格納
    studentScores[name] = num;  // insertと同じような働き
}

// mapの内容を表示
cout << "\n学生名と点数:\n";
for (const auto& entry : studentScores) {
    cout << "名前: " << entry.first << ", 点数: " << entry.second << endl;
}

// 特定の学生を検索
cout << "\n検索したい学生の名前を入力してください: ";
string searchName;
cin >> searchName;

// 学生が存在するか検索
auto it = studentScores.find(searchName);
if (it != studentScores.end()) {
    cout << searchName << " の点数は " << it->second << " 点です。" << endl;
} else {
    cout << searchName << " は見つかりませんでした。" << endl;
}

return 0;
}



