class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        res = len(nums)
        i = 0
        while(i < res):
            if(nums[i] == val):
                nums.pop(i)
                res -= 1
                i -= 1
            i += 1
        return res
