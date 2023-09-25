class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        if(n<10){
            return n;
        }
        if(n==1000000000){
            return 999999999;
        }
        vector<int> bitNums;
	    int temp = n;
	    while (temp>0)
	    {
		    bitNums.push_back(temp % 10);
		    temp /= 10;
	    }//将n的各个位数上的数字放入到bitNums数组中
        reverse(bitNums.begin(),bitNums.end());
        int flag=bitNums.size();
        for(int i=bitNums.size()-1;i>0;--i)
        {
            if(bitNums[i-1]>bitNums[i]){
                bitNums[i-1]--;
                flag=i;
            }
        }
        for(;flag<bitNums.size();++flag)
        {
            bitNums[flag]=9;
        }
        int ans=0,pos=1;
        reverse(bitNums.begin(),bitNums.end());
        for(int i=0;i<bitNums.size();++i,pos*=10)
        {
            ans+=pos*bitNums[i];
        }
        return ans;
    }
};
