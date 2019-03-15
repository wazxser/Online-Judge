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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        while(!tempStack.empty() || root != NULL){
            if(root != NULL){
                res.push_back(root->val);
                tempStack.push(root);
                root = root->left;
            }
            else{
                root = tempStack.top();
                tempStack.pop();
                root = root->right;
            }
        }
        return res;
    }
};
