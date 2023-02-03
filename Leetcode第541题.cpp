class Solution {
public:
    void reverse_string(string& s,int left,int right){
        while(left<right)
            {
                char temp=s[left];
                s[left]=s[right];
                s[right]=temp;
                left++;
                right--;
            }
    }
    string reverseStr(string s, int k) {
        if(s.size()<k){
            reverse(s.begin(),s.end());
            return s;
        }
        int for_each=0;
        int size=s.size();
        while(for_each+k<=size)
        {
            int left=for_each;
            int right=for_each+k-1;
            reverse_string(s,left,right);
            for_each+=2*k;
        }
        if(for_each<size-1){reverse_string(s,for_each,size-1);}
        return s;
    }
};
