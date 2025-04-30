#include<iostream>
#include<map>
#include<string>
using namespace std;

class Test{
public:
    void func(){
        map<string,int> map1;
        for(int i = 0;i<5;i++){
        string str;
        cin >> str;
        map1[str]++;
    }

    for(auto p : map1){
    cout<<p.first<<":"<<p.second << endl;
    }
}
};

int main(){
    Test test;
    test.func();
    return 0;
}