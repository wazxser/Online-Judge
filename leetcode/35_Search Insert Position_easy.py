class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if nums[-1] < target:
            return len(nums)
        res = -1
        for i in xrange(len(nums)):
            if nums[i] >= target:
                res = i
                break
        return res
