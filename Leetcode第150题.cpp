class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string s :tokens)
        {
            if(s!="+"&&s!="*"&&s!="-"&&s!="/"){
                stk.push(atoi(s.c_str()));
            }
            else
            {
                int operator1=stk.top();
                stk.pop();
                int operator2=stk.top();
                stk.pop();
                char c=s[0];
                switch(c){
                    case '+':
                    stk.push(operator2+operator1);
                    break;
                    case '-':
                    stk.push(operator2-operator1);
                    break;
                    case '*':
                    stk.push(operator2*operator1);
                    break;
                    case '/':
                    stk.push(operator2/operator1);
                    break;
                }    
            }
        }
        return stk.top();
    }
};
