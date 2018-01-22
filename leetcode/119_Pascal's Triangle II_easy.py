class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        res = [1]
        for i in xrange(rowIndex):
            res = [x+y for x, y in zip(res + [0], [0] + res)]
        
        return res