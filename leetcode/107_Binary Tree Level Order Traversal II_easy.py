# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        self.dfs(root, 0, res)
        return res
    
    def dfs(self, node, level, res):
        if node:
            if len(res) < level + 1:
                res.insert(0, [])
            res[-(level+1)].append(node.val)
            self.dfs(node.left, level+1, res)
            self.dfs(node.right, level+1, res)