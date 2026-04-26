class Solution {
public:
    bool iscycle(vector<vector<char>>& grid,int i,int j,map<pair<int,int>,pair<int,int>> &mp){
        int n = grid.size();
        int m = grid[0].size();
        char ch = grid[i][j];
        queue<pair<int,int>> q;
         mp[{i,j}] = {-1,-1};
        q.push({i,j});
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            int px = mp[{x,y}].first;
            int py = mp[{x,y}].second;
            q.pop();

            // bottom
            if(x+1 < n && grid[x+1][y] == ch){
                if(!(x+1 == px && y == py)){ // skip parent
                    if(mp.count({x+1,y})) return true;
                    mp[{x+1,y}] = {x,y};
                    q.push({x+1,y});
                }
            }
            // top
            if(x-1 >= 0 && grid[x-1][y] == ch){
                if(!(x-1 == px && y == py)){
                    if(mp.count({x-1,y})) return true;
                    mp[{x-1,y}] = {x,y};
                    q.push({x-1,y});
                }
            }
            // left
            if(y-1 >= 0 && grid[x][y-1] == ch){
                if(!(x == px && y-1 == py)){
                    if(mp.count({x,y-1})) return true;
                    mp[{x,y-1}] = {x,y};
                    q.push({x,y-1});
                }
            }
            // right
            if(y+1 < m && grid[x][y+1] == ch){
                if(!(x == px && y+1 == py)){
                    if(mp.count({x,y+1})) return true;
                    mp[{x,y+1}] = {x,y};
                    q.push({x,y+1});
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
          int n=grid.size();
          int m=grid[0].size();
          map<pair<int,int>,pair<int,int>> mp;
          for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(!mp.count({i,j})){
                         if(iscycle(grid,i,j,mp)){
                           return true;
                         }
                    }
                }
          }


      return false;
    }
};