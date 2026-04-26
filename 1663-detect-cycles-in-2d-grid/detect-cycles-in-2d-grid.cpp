class Solution {
public:
    int n, m;
    vector<vector<bool>> visited;

    bool dfs(vector<vector<char>>& grid, int x, int y, int px, int py, char ch) {
        if (visited[x][y]) return true;
        visited[x][y] = true;

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        for (auto &d : dirs) {
            int nx = x + d[0], ny = y + d[1];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (grid[nx][ny] != ch) continue;
            if (nx == px && ny == py) continue; // skip parent
            if (dfs(grid, nx, ny, x, y, ch)) return true;
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        visited.assign(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j]) {
                    if (dfs(grid, i, j, -1, -1, grid[i][j])) return true;
                }
            }
        }
        return false;
    }
};
