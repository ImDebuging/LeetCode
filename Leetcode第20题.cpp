class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2){return false;}
        stack<char> stk;
        for(char c:s){
            switch (c)
            {
                case '(':
                stk.push(')');
                break;
                case '[':
                stk.push(']');
                break;
                case '{':
                stk.push('}');
                break;
                default:
                if(stk.size()==0||stk.top()!=c){
                    return false;
                }else{
                    stk.pop();
                }
            }
        }
        if(stk.size()==0){
            return true;
        }else{
            return false;
        }
    }
};
