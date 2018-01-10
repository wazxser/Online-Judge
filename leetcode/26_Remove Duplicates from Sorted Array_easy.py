class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        if len(nums) > 0:
            temp = nums[0]
            res = 1
            i = 1
            while i < len(nums):
                if nums[i] > temp:
                    res += 1
                    temp = nums[i]
                else:
                    nums.pop(i)
                    i -= 1
                i += 1
        return res
        
