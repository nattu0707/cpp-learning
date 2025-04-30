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
        int max_value = nums[0];
        int min_value = nums[0];
        for (int num : nums){
            if(num > max_value)max_value =num;
            if(num < min_value)min_value =num;
        }
        cout <<"max:"<< max_value <<endl;
        cout <<"min:"<<min_value <<endl;
        }
    };

int main(){
    Test test;
    test.func();
    return 0;
}