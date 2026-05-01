class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int mul=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
              sum+=nums[i];
              mul+=nums[i]*i;
        }
        ans=mul;
        for(int i=n-1;i>=0;i--){
               mul=mul+sum-nums[i]*n;
               ans=max(ans,mul);
        }
        
        return ans;
    }
};