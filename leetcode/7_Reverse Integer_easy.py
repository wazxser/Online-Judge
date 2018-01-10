class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        num = str(x)
        res = 0
        for i in xrange(len(num)):
            if num[len(num)-1-i].isdigit():
                res = res*10 + int(num[len(num)-1-i])
            else:
                res = 0 - res
            if abs(res) > 2**31-1:
                res = 0
        return res
