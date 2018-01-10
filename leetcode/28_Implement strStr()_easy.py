class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if len(haystack) == 0 and len(needle) == 0:
            return 0
        num1 = len(needle)
        res = -1
        for i in xrange(len(haystack)):
            temp = haystack[i:i+num1]
            if temp == needle and res == -1:
                    res = i
        return res
