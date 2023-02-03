class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        t=list(s)
        for i in range(0,len(s),2*k):
            t[i:i+k]=reversed(t[i:i+k])
        return "".join(t)
