# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def symmetric(self, l, r):
        if not l and not r:
            return True
        elif l and r and l.val == r.val:
            return self.symmetric(l.left, r.right) and self.symmetric(l.right, r.left)
        else:
            return False
    
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.symmetric(root.left, root.right) if root else True