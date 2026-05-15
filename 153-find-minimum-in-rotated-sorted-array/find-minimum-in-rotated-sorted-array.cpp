class Solution {
public:
    int findMin(vector<int>& nums) {
             int ans=INT_MAX;
             for(int a:nums){
               ans=min(ans,a);
             }   
             return ans;
    }
};