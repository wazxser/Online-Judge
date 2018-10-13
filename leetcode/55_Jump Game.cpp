//题意：给定数组，数组每个元素代表从该位置最多可以前进的步数，问是否能够达到最后一个元素的位置？
//思路：设定一个可以达到位置的数组，遍历原数组，将所有可以达到的位置标记下来，遍历时，如果有元素不能被到达，那最后一个位置肯定也不能达到。

class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> judge(nums.size(), 0);
        judge[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            if(judge[i] == 1){
                for(int j = 0; j < nums[i]; j++){
                    judge[i+j+1] = 1;
                }
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};
