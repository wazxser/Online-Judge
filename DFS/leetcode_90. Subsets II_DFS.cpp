//求数组所有子集的第二个版本，数组中含有重复元素，要求输出子集中没有重复的
//去重，没想明白

class Solution {
public:
    void dfs(vector<int> &temp, vector<int> nums, vector<vector<int>> &res, int index){
        res.push_back(temp);
        for(int i = index; i < nums.size(); i++){
            if(i > index){
                if(nums[i] == nums[i-1]){
                    continue;
                }
            }
            temp.push_back(nums[i]);
            dfs(temp, nums, res, i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        dfs(temp, nums, res, 0);
        return res;
    }
};
