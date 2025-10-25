class Solution {
public:

    void dfs(vector<vector<int>>&grid, vector<vector<int>>&visited, int row, int col, int m, int n){
        int arr1[4] = {0,1,0,-1};
        int arr2[4] = {1,0,-1,0};

        for(int i=0; i<4; i++){
            int newrow = row + arr1[i];
            int newcol = col + arr2[i];
        
            if((newrow>=0 && newrow < m) && (newcol>=0 && newcol < n)){
                if(grid[newrow][newcol]==0 && visited[newrow][newcol] == 0){
                    visited[newrow][newcol] =1;
                    dfs(grid, visited, newrow, newcol, m , n);
                }
            }

        }

    }


    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>>visited(m, vector<int>(n,0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    if(grid[i][j] == 0 && visited[i][j] == 0){
                        visited[i][j] = 1;
                        dfs(grid, visited, i, j, m, n);
                    }
                }
            }
        }

        int cnt = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0 && visited[i][j] == 0){
                    cnt++;
                    visited[i][j] = 1;
                    dfs(grid, visited, i, j, m, n);
                }
            }
        }
    return cnt;
    }
};