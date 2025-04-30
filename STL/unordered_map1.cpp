/*マップ　キーと値のペアを格納するデータ構造
map(C++)順序付きのマップ　キーがソートされて格納される
unordered_map(C++)順不同のマップ　内部でハッシュ関数を使って格納
HashMap(Java)Javaで提供されるmap
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
/*　
【関数の記述方法】

戻り値の型 関数名(引数の型 引数名, ...) {
    // 関数の処理内容
    return 戻り値; // 戻り値が必要な場合
}
戻り値の型　 関数名  引数 整数のベクターnums　整数のtarget
    ↓　　　　　↓　　　　　↓                 　↓
vector<int> twoSum(vector<int>& nums,int target){

*/
        unordered_map<int, int> map;  // 値 -> インデックス
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];  // 現在の数に足して target になる数
            if (map.count(complement)) {  // map にその数があれば
                return {map[complement], i};  // そのインデックスと現在のインデックスを返す
            }
            map[nums[i]] = i;  // map に現在の数とインデックスを格納
        }
        return {};  // 解が必ず存在する前提なので通常ここには来ない
    }
};

int main() {
    Solution solution;
    
    // サンプル入力
    vector<int> nums = {2, 7, 11, 15};  // 数値のリスト
    int target = 9;  // 目標となる値
    
    // twoSum 関数を呼び出す
    vector<int> result = solution.twoSum(nums, target);
    
    // 結果の出力
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;  // インデックスを表示
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}