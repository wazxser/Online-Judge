# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if not root:
            return False
        return self.dfs(root, 0, sum)
        
    def dfs(self, root, num, sum):
        if not root:
            return False
        num += root.val
        if not root.left and not root.right:
            return num == sum
        return self.dfs(root.left, num, sum) or self.dfs(root.right, num, sum)