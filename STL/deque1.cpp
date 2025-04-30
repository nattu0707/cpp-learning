//deque...両端キューと呼ばれ先頭と末尾の両方に対して要素の挿入・削除が高速に行えるSTLコンテナ
#include<iostream>
#include<deque>
#include<string>
using namespace std;

class Test{
    public:
    void func(){
    deque<string> deq1;
    while(true){
        string n;
        string str;
        cout <<"最初に挿入⇒ F,最後に挿入⇒ BS 終了⇒ END"<<endl;
        cin >> n;
        if(n == "END"){break;
        }
        if(n == "F"){
            cout<<"最初に入れたい文字列を入力"<<endl;
            cin >> str;
            deq1.push_front(str);
        }
        if(n == "B"){
            cout<<"最後に入れたい文字列を入力"<<endl;
            cin >> str;
            deq1.push_back(str);

        }
       
        cout << "入力は" <<endl;
        for(auto a :deq1){
            cout << a <<endl;
        };
    }
    }
};

int main(){
    Test test;
    test.func();
}