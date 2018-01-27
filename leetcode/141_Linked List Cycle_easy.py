# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        try:
            one = head
            two = head.next
            while not one == two:
                one = one.next
                two = two.next.next
            return True
        except:
            return False