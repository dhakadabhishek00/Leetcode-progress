class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int i=0;
            int n=nums.size();
            int j=0;
            int ans=INT_MAX;
            int sum=0;
            while(j<=i && i<n && j<n){
                    sum+=nums[i];
                    i++;
                    while(sum>=target && j<=i){
                         ans=min(i-j,ans);
                           sum-=nums[j];
                           j++;
                    }
            }  
            if(ans==INT_MAX){
              ans=0;
            }
            return ans; 
    }
};