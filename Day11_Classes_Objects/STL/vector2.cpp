#include<iostream>
#include<vector>
using namespace std;
//
int main(){
vector<int> vec1;
vec1.push_back(1);
vec1.push_back(3);

int num;

for(int num : vec1){
    cout << num << " ";
}
cout << endl;

vec1.erase(vec1.begin()+1);
cout << "削除後 : "<< endl;
for(int num : vec1){
cout << num <<"";
}
cout << endl;

cout<<"size:"<<vec1.size();
cout<<"first:"<<vec1.front();
cout<<"last:"<<vec1.back();
return 0;
}
