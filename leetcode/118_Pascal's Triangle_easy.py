class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if not numRows:
            return []
        res = [[1]]
        for i in xrange(1, numRows):
            res.append([1])
            for j in xrange(1, i):
                res[i].append(res[i-1][j]+res[i-1][j-1])
            res[i].append(1)
        return res