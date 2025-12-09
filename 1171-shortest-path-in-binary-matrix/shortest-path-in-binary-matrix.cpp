class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        queue<pair<int,pair<int,int>>>q;

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;

        if(n == 1) return 1;

        q.push({1,{0,0}});

        int delr[] = {0, 1, 1, 1, 0, -1, -1, -1};
        int delc[] = {1, 1, 0, -1, -1, -1, 0, 1};

        while(!q.empty()){
            auto it = q.front();
            int dis = it.first;
            int r = it.second.first;
            int c = it.second.second;
            q.pop();

            for(int i = 0; i < 8; i++){
                int nrow = r + delr[i];
                int ncol = c + delc[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0 && 1 + dis < dist[nrow][ncol]){
                    dist[nrow][ncol] = 1 + dis;
                    if(nrow == n-1 && ncol == n-1) return 1 + dis;
                    q.push({1 + dis, {nrow, ncol}});
                }
            }
        }
        return -1;
    }
};