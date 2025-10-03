class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        // Push all initially rotten oranges
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    visited[i][j] = 2;
                }
            }
        }

        int tm = 0;
        int row[4] = {-1,0,1,0};
        int col[4] = {0,1,0,-1};

        // BFS
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm, t);
            q.pop();

            for(int i=0; i<4; i++){
                int nrow = r + row[i];
                int ncol = c + col[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                   && visited[nrow][ncol] != 2 && grid[nrow][ncol] == 1) {
                    q.push({{nrow,ncol}, t+1});
                    visited[nrow][ncol] = 2;
                }
            }
        }

        // Check if any fresh orange is left
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && visited[i][j] != 2){
                    return -1;
                }
            }
        }

        return tm;
    }
};
