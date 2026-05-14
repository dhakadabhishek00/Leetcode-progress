class Solution {
public:
    bool isGood(vector<int>& nums) {
         int n=nums.size();
         map<int,int>freq;
         for(int a:nums){
              freq[a]++;
         }
         for(int i=1;i<n-1;i++){
            cout<<i<<" ";
            if(freq[i]!=1)return false;
         }
         if(freq[n-1]!=2)return false;
         return true;
    }
};