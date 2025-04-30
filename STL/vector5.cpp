#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Test{
    public:
    void func(){
        vector<int> nums;
        cout << "5個の整数を入力してください"<<endl;
        for(int i = 0; i < 5; ++i){
            cout<<i<<"番目" <<endl;
            int num;
            cin >> num;
            nums.push_back(num);
        } 

        cout <<"auto it = max_element(nums.begin(),nums.end()を使う ⇒ max:";
        auto it =max_element(nums.begin(),nums.end());
        cout << *it <<endl;

        cout <<"auto it = min_element(nums.begin(),nums.end()を使う ⇒ min:";
        auto it2 =min_element(nums.begin(),nums.end());
        cout << *it2 <<endl;

    
        }
    };

int main(){
    Test test;
    test.func();
    return 0;
}