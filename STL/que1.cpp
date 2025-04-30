#include<queue>
#include<iostream>
using namespace std;
class Test{
    public:
    void func(){
        int n;
        cout<<"何人の名前を入力しますか:"<<endl;
        cin>>n;
        string str;
        queue<string> que1;
        for(int i= 0; i <n;i++ ){
        cout <<i+1<<"番目の人の名前を入力してください"<<endl;
        cin >>str;
        que1.push(str);
    }
    cout<<"呼び出し開始"<<endl;
    while(!que1.empty()){
        cout << "次の人は"<<que1.front()<<endl;
        que1.pop();
    }

    }
};

int main(){
    Test test;
    test.func();
    return 0;
}