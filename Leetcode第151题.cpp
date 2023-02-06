class Solution {
public:
    void reverse(string &s,int start,int end)
    {
        for (int i = start, j = end; i < j; i++, j--)   {
            swap(s[i], s[j]);
        }
    }
    void removeExtraSpaces(string &s)
    {
        int slow=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]!=' '){
                if(slow>0){s[slow++]=' ';}
                while(i<s.size()&&s[i]!=' ')
                {
                    s[slow++]=s[i++];
                }
            }
        }
        s.resize(slow);
    }
    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s,0,s.size()-1);
        for(int i=0,j=0;i<=s.size();++i)
        {
            if(s[i]==' '||i==s.size())
            {
                reverse(s,j,i-1);
                j=i+1;
            }
        }
        return s;
          
        
    }
};



//python调库比较无赖，就放在这边好了（看不见我，看不见我）
// class Solution(object):
//     def reverseWords(self, s):
//         return " ".join(s.split()[::-1])
