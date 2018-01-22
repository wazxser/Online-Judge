class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxCur = 0
        maxSoFar = 0
        for i in xrange(1, len(prices)):
            maxCur += prices[i] - prices[i-1] 
            maxCur = max(0, maxCur)
            maxSoFar = max(maxSoFar, maxCur)
        
        return maxSoFar