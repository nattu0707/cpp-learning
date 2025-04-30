/*priority_queue（優先度付きqueue）
値の大きい（または小さい）ものが優先的に出てくる*/
#include<iostream>
#include<queue>
using namespace std;

class Test{
    public:
    void func(){
        priority_queue<int> pq;
        pq.push(5);
        pq.push(42);
        pq.push(7);

        cout<<"最大値:"<<pq.top()<<endl;
        pq.pop();
        cout<<"次の最大値"<<pq.top()<<endl;
    }
};

int main(){
    Test test;
    test.func();
}