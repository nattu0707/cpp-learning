#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> set1;
    
    set1.insert(20);
    set1.insert(20);
    set1.insert(20);
    set1.insert(10);
    set1.insert(10);
    set1.insert(10);

    for(int num :set1){
        cout << num <<" ";
    }
    /*
    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";  // イテレータを使って要素にアクセス
    }

    for (auto it = set1.begin(); it != set1.end(); ++it) {
        cout << *it << " ";  // イテレータを使って要素にアクセス
    }
    */
}