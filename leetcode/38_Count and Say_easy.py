class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        res = '1'
        s = '1'
        for i in xrange(1, n):
            res = ''
            temp = []
            for j in xrange(len(s)):
                if len(temp) == 0:
                    temp += s[j]
                elif temp[-1] == s[j]:
                    temp += s[j]
                else:
                    res += str(len(temp)) + temp[-1]
                    temp = s[j]
            if len(temp) != 0:
                res += str(len(temp)) + temp[-1]
            s = res
        return res
