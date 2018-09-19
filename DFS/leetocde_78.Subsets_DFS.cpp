//这道题的题意是给出一个数组得所有子集，包括空集和本身
//用DFS搜索，按序遍历数组的每一个元素，再dfs搜索包括该元素的所有可能子集

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
