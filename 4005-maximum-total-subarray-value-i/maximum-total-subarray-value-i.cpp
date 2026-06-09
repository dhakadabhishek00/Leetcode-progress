class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long ans=0;
        int m=INT_MIN;
        int min=INT_MAX;
        int n=nums.size();
        for(int a:nums){
            if(min>a)min=a;
            if(m<a)m=a;
        }

        ans=m-min;
        return ans*k;
    }
};