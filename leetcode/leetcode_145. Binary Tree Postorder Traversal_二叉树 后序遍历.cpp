/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        tempStack.push(root);
        while(!tempStack.empty()){
            TreeNode* temp = tempStack.top();
            tempStack.pop();
            if(temp != NULL){
                res.insert(res.begin(), temp->val);
                tempStack.push(temp->left);
                tempStack.push(temp->right);
            }
        }
        return res;
    }
};
