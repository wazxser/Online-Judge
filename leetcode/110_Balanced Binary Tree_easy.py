# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
        
        return self.check(root) != -1
    
    def check(self, root):
        if not root:
            return 0
        left = self.check(root.left)
        right = self.check(root.right)
        
        if left == -1 or right == -1 or abs(left-right) > 1:
            return -1
        return max(left, right)+1