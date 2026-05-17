#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(start);

        while (!q.empty()) {
            int i = q.front();
            q.pop();

            if (arr[i] == 0) return true;   // ✅ Found target
            if (visited[i]) continue;       // Skip already visited

            visited[i] = true;

            int forward = i + arr[i];
            int backward = i - arr[i];

            if (forward < n && !visited[forward]) q.push(forward);
            if (backward >= 0 && !visited[backward]) q.push(backward);
        }
        return false;
    }
};
