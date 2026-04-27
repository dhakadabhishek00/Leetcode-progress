class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0] = true;

        // directions for each pipe type
        vector<vector<pair<int,int>>> dirs = {
            {}, // 0 unused
            {{0,-1},{0,1}},       // type 1: left, right
            {{-1,0},{1,0}},       // type 2: up, down
            {{0,-1},{1,0}},       // type 3: left, down
            {{0,1},{1,0}},        // type 4: right, down
            {{0,-1},{-1,0}},      // type 5: left, up
            {{0,1},{-1,0}}        // type 6: right, up
        };

        while(!q.empty()){
            auto [x,y] = q.front(); q.pop();
            if(x==n-1 && y==m-1) return true;

            for(auto d : dirs[grid[x][y]]) {
                int nx = x + d.first, ny = y + d.second;
                if(nx<0||ny<0||nx>=n||ny>=m||vis[nx][ny]) continue;

                // check if neighbor pipe connects back
                for(auto back : dirs[grid[nx][ny]]) {
                    if(nx+back.first==x && ny+back.second==y) {
                        vis[nx][ny] = true;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return false;
    }
};
