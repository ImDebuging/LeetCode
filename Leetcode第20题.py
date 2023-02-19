class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if(len(s)&1  
        or s.count('(')!=s.count(')') 
        or s.count('[')!=s.count(']') 
        or s.count('{')!=s.count('}')) :
            return False
        stack=["#"]
        for c in s:
            if c in '([{':
                stack.append(c)
            else:
                if stack.pop()+c not in ("()","[]","{}"):
                    return False
        return True
