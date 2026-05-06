class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
              for(vector<char>&v:boxGrid){
                    int n=v.size();
                    for(int i=n-2;i>=0;i--){
                                if(v[i]=='*'|| v[i+1]=='*')continue;
                                int c=i;
                                if(v[i]=='#'){
                                     while( c<n-1 && v[c+1]=='.'){
                                      swap(v[c],v[c+1]);
                                      c++;
                                   }    
                                }
                                
                    }
                   
              }
              int n=boxGrid.size();
              int m=boxGrid[0].size();
              vector<vector<char>> ans;
              for(int i=0;i<m;i++){
                vector<char>t;
                  for(int j=n-1;j>=0;j--){
                       t.push_back(boxGrid[j][i]);
                     
                  }
                  ans.push_back(t);
                 
              }

              return ans;
    }
};