//set 値だけ　重複無し自動でソートされる
//map キーと値のペア　辞書みたいなもの
#include<iostream>
#include<set>
using namespace std;

class Set{
    public:
    void test(){
        set <int>set1;
        for(int i = 0;i<5;i++){
            int n;
            cin >> n;
            set1.insert(n);
        }
        for(int a:set1){
        cout << a;
        }
    }
};

int main(){
    Set set;
    set.test();
    return 0;
}