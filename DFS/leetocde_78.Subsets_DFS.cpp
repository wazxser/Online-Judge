class Solution {
public:
    void dfs(vector<int> &temp, vector<int> nums, vector<vector<int>> &res, int index){
        res.push_back(temp);
        for(int i = index; i < nums.size(); i++){
            temp.push_back(nums[i]);
            dfs(temp, nums, res, i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        dfs(temp, nums, res, 0);
        return res;
    }
};
