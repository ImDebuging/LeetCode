class Solution {
public:
    int integerBreak(int n) {
        if(n==2||n==3){
            return n-1;
        }
        vector<int> dp_product;//用来存放每个数对应最大乘积的dp数组
        dp_product.push_back(1);
        dp_product.push_back(2);
        for(int i=4;i<=n;++i)
        {
            int max=0;
            for(int j=2;j<=i/2;++j)
            {
                int product=j*dp_product[i-j-2]>j*(i-j)?j*dp_product[i-j-2]:j*(i-j);
                if(product>max){
                    max=product;
                }
            }
            dp_product.push_back(max);
        }
        return *(dp_product.end()-1);
    }
};
