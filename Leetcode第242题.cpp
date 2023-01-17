class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){return false;}
        int hashmap[26]={0};
        for(int i=0;i<s.size();++i)
        {
            hashmap[s[i]-'a']++;
        }
        for(int j=0;j<t.size();++j)
        {
            hashmap[t[j]-'a']--;
        }
        for(int z=0;z<26;++z)
        {
            if(hashmap[z]!=0){
                return false;
            }
        }
        return true;
    }
};
