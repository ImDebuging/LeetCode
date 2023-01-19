class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        set<int>s2;
        vector<int>ret;
        for(vector<int>::iterator it=nums1.begin();
        it!=nums1.end();++it)
        {
            s.insert(*it);
        }
        for(vector<int>::iterator it=nums2.begin();
        it!=nums2.end();++it)
        {
            if(s.find(*it)!=s.end()){
                s2.insert(*it);
            }
        }
        for(set<int>::iterator it=s2.begin();it!=s2.end();++it){
            ret.push_back(*it);
        }
        return ret;
    }
};
