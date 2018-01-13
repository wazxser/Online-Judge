class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        digits.reverse()
        digits[0] += 1

        for i in xrange(len(digits)):
            num = digits[i] / 10
            digits[i] %= 10
            if i <= len(digits)-2:
                digits[i+1] += num
            elif num > 0:
                digits.insert(len(digits), num)

        digits.reverse()
        
        return digits