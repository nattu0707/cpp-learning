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
        cout <<"ソート1"<<endl;
        sort(nums.begin(),nums.end());
        for(int num:nums){
            cout<<num<<""<<endl;
        }

        cout <<"ソート2"<<endl;
        reverse(nums.begin(), nums.end());
        for(int num:nums){
            cout<<num<<""<<endl;
        }
    }
};

int main(){
    Test test;
    test.func();
    return 0;
}