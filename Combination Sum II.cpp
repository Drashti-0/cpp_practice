#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getperms(vector<int> &nums, int idx, vector<vector<int>> &ans){
        
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = idx; i < nums.size(); i++){
            swap(nums[idx], nums[i]);

            getperms(nums, idx + 1, ans);

            swap(nums[idx], nums[i]);
        }
    }
};

int main(){

    vector<int> nums = {10,1,2,7,6,1,5};
    vector<vector<int>> ans;

    Solution obj;
    obj.getperms(nums, 0, ans);

    // PRINT WITHOUT AUTO
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
           
            if(ans[i]+ans[j]=='8'){
                 cout << ans[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}