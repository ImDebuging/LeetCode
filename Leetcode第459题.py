class Solution(object):
    def repeatedSubstringPattern(self, s):
        ss=s+s
        s1=ss[1:-1]
        if s1.find(s)!=-1:
            return True
        else:
            return False
