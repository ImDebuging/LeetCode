class MyQueue(object):
    def __init__(self):
        self.s=[]
    def push(self, x):
        self.s.append(x)
    def pop(self):
        res=self.s[0]
        self.s.remove(self.s[0])
        return res
    def peek(self):
        return self.s[0]
    def empty(self):
        if(len(self.s)==0):
            return True
        else:
            return False
