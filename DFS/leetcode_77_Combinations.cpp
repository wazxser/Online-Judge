//题意：给出n，k，求1到n所有k个数字的组合，不重复
//思路：dfs，回溯，dfs还是写不好，再继续看吧

class Solution {
public:
    void dfs(vector<vector<int>> &res, vector<int> temp, int n, int k, int pos){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        
        for(int i = pos; i <= n; i++){
            temp.push_back(i);
            dfs(res, temp, n, k, i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        if(n <= 0 || k <= 0 || n < k){
            return res;
        }
        vector<int> temp;
        dfs(res, temp, n, k, 1);
        return res;
    }
};
