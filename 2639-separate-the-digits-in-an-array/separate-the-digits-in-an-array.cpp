class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int a:nums){
              vector<int>t;
              while(a!=0){
                  t.push_back(a%10);
                  a/=10;
              }
              for(int i=t.size()-1;i>=0;i--){
                ans.push_back(t[i]);
              }
        }
        return ans;
    }
};