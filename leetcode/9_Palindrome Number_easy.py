class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num = str(x)
        for i in xrange(len(num)/2):
            if num[i] != num[len(num)-1-i]:
                return False
        return True
