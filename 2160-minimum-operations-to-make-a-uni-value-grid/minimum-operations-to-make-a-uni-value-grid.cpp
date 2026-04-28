class Solution {
public:
   int fun(vector<vector<int>>& grid,int get,int x){
           int n=grid.size();
            int m=grid[0].size();
         int ans=0;
          for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int v=grid[i][j];
                    if(v==get)continue;
                    else if(v<get){
                          ans+=(get-v)/x;
                    }
                    else if(v>get){
                          ans+=(v-get)/x;
                    }
                }
            }
            return ans;
   }
    int minOperations(vector<vector<int>>& grid, int x) {
            vector<int>values;
            int prev=-1;
            int n=grid.size();
            int m=grid[0].size();
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                     values.push_back(grid[i][j]);
                     if(prev==-1){
                       prev=grid[i][j]%x;
                     }
                     else if(prev!=(grid[i][j]%x)){
                       return -1;
                     }
                }
            }
            sort(values.begin(),values.end());
            int s=(n*m)/2;
            int f=-1,sec=-1,th=-1;
            f=values[s];
            int i=s;
            while(i>=0 && values[i]==f){
                 i--;
            }        
            if(i>=0)sec=values[i];
             i=s;
            while(i<n*m && values[i]==f){
                 i++;
            }        
            if(i<n*m)th=values[i];    
            int ans=INT_MAX;
             ans=min(fun(grid,f,x),ans);
             ans=min(fun(grid,sec,x),ans);
             ans=min(fun(grid,th,x),ans);
            cout<<f<<" "<<sec<<" "<<th<<"\n";
            return ans;
    }
};