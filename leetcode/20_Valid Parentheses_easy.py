class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for ch in s:
            if len(stack) == 0:
                stack.append(ch)
            elif (stack[-1] == '[' and ch == ']') or (stack[-1] == '{' and ch == '}') or (stack[-1] == '(' and ch == ')'):
                stack.pop()
            else:
                stack.append(ch)
        
        if(len(stack) > 0):
            return False
        return True
