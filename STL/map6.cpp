#include<iostream>
#include<map>
#include<string>
using namespace std;

class Test{
public:
    void func(){
        cout<<"単語を入力してください"<<endl;
        map<string,int> map1;
        for(int i = 0;i<5;i++){
        string str;
        cin >> str;
        map1[str]++;
    }
    string max_word = "";
    int max_count = 0;
    for(auto p : map1){
        if(p.second >  max_count){
            max_count = p.second;
            max_word = p.first;
        }
    }
    for(auto p : map1){
        if(p.second ==  max_count){
            max_word = p.first;
            cout <<max_word<<":"<<max_count<<endl;
        }}
    }
};

int main(){
    Test test;
    test.func();
    return 0;
}