class Solution(object):
    def removeDuplicates(self, s):
        """
        :type s: str
        :rtype: str
        """
        temp=[]
        for i in s:
            if len(temp)!=0 and i==temp[-1]:
                temp.pop()
            else:
                temp.append(i)
        return ''.join(temp)

