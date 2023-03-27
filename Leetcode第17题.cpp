class Solution {
private:
    string LetterMap[10]=
    {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };
    vector<string> result;
    string s;
    void BackTracking(const string& digits,int index)
    {
        if(index==digits.size()){
            result.push_back(s);
            return;
        }
        int digit=digits[index]-'0';
        string letters=LetterMap[digit];
        for(int i=0;i<letters.size();++i)
        {
            s.push_back(letters[i]);
            BackTracking(digits,index+1);
            s.pop_back();   
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            vector<string> ss;
            return ss;
        }
        BackTracking(digits,0);
        return result;
    }
};
