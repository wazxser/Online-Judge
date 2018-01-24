class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = list(s)
        num = len(s)
        ch = 0
        while ch < num:
            if not s[ch].isalpha() and not s[ch].isdigit():
                s.pop(ch)
                num -= 1
                ch -= 1
            elif s[ch].isupper():
                s[ch] = s[ch].lower()
            ch += 1
        if len(s) == 0 or len(s) == 1:
            return True
        list1 = s[:len(s)/2]
        if len(s) % 2 == 0:
            list2 = s[len(s)/2:len(s)]
        else:
            list2 = s[len(s)/2+1:len(s)]
        list2.reverse()
        return  list1 == list2