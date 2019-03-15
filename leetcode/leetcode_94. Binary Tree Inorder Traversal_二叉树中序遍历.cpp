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
//     递归    
//     vector<int> res;
    
//     vector<int> inorderTraversal(TreeNode* root) {
//         if(root != NULL){
//             inorderTraversal(root->left);
//             res.push_back(root->val);
//             inorderTraversal(root->right);
//         }
        
//         return res;
//     }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        while(!tempStack.empty() || root != NULL){
            if(root != NULL){
                tempStack.push(root);
                root = root->left;
            }
            else{
                root = tempStack.top();
                res.push_back(tempStack.top()->val);
                tempStack.pop();
                root = root->right;
            }
        }
        
        return res;
    }
};
