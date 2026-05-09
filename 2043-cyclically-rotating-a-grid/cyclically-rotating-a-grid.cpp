class Solution {
public:
      void rotate(vector<vector<int>>& grid,int k,int p){
               int n=grid.size();
               int m=grid[0].size();
               vector<int>arr;
               for(int i=k;i<m-k;i++){
               
                    arr.push_back(grid[k][i]);
               }
              
               
               for(int i=k+1;i<n-k;i++){
                   
                    arr.push_back(grid[i][m-k-1]);
               }
                
               for(int i=m-k-2;i>=k;i--){
                  
                    arr.push_back(grid[n-k-1][i]);
               }
                
               for(int i=n-k-2;i>k;i--){
                   
                    arr.push_back(grid[i][k]);
               }
              
              
              int ns=arr.size();
             
             
              int r=p % ns;
              reverse(arr.begin(),arr.begin()+r);
              reverse(arr.begin()+r,arr.end());
              reverse(arr.begin(),arr.end());

             
              int idx=0;

               for(int i=k;i<m-k;i++){
                  grid[k][i]=arr[idx];
                  idx++;
               }
               
               for(int i=k+1;i<n-k;i++){
                    grid[i][m-k-1]=arr[idx];
                    idx++;
               }
                
               for(int i=m-k-2;i>=k;i--){
                    grid[n-k-1][i]=arr[idx];
                    idx++;
                    
               }
               
               for(int i=n-k-2;i>k;i--){
                    grid[i][k]=arr[idx]; 
                    idx++;  
               }

      }
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
          int n=grid.size();
          int m=grid[0].size();
          int s=min(n,m);
          for(int i=0;i<(s/2);i++)
             rotate(grid,i,k);
          
           return grid;
    }
};