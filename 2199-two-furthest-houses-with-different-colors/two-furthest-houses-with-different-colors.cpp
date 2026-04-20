class Solution {
public:
    int maxDistance(vector<int>& colors) {
                // int st=0;
                int ans=0;
                int n=colors.size();
                int i=n-1;
                while(i>0 && colors[i]==colors[0])i--;
                ans=max(ans,i);
                i=0;
                while(i<n-1 && colors[i]==colors[n-1])i++;
                ans=max(ans,n-i-1);
   return ans;
    }
};