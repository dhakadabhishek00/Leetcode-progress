class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(),intervals.end());
            int n=intervals.size();
            vector<vector<int>>ans;
            
             int i=0;
             while(i<n){
                  vector<int>temp=intervals[i];
                  i++;
                  while(i<n && temp[1]>=intervals[i][0]){
                           temp[1]=max(temp[1],intervals[i][1]);
                           i++;
                  }
                  ans.push_back(temp);
             }
             return ans;
    }
};