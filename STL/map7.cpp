#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Test{
    public:
    void unmaptest(){
        unordered_map<string,int> map1;
        int n;
        string str;
        cout <<"いくつの文字を入力しますか"<<endl;
        cin >> n;
        cout<<"単語を入力"<<endl;
        for(int i =0;i < n;i++){
            cin >> str;
            map1[str] ++;
        }
        string max_word = "";
        int max = 0;
        for(auto p : map1 ){
            if(p.second > max){
                max = p.second;
                max_word = p.first;
            }
        } 
        for(auto p : map1){
            if(p.second == max){
                max_word = p.first;
                cout << max_word << max <<endl;
            }
        }

    }

};

int main(){
    Test test ;
    test.unmaptest();
    return 0;
}