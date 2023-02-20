class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();++i){
            if(!stk.empty()&&s[i]==stk.top()){
                stk.pop();
                s.erase(i-1,2);
                i-=2;
            }
            else{stk.push(s[i]);}
        }
        return s;
    }
};
