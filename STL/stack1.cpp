#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Test{
    public:
    void func(){
    string s;
    cout <<"()の文字列を作成してください"<<endl;
    cin >> s;
    
    stack<char> st;

    for(char c :s){
        if(c == '('){
            st.push(c);
        }else if(c == ')'){
            if(st.empty()){
                cout <<"()を正しく閉じれません"<<endl;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"OK"<<endl;
    }else{
        cout<<"NG"<<endl;
    }

    }

};

int main(){
    Test test;
    test.func();
    return 0;
}