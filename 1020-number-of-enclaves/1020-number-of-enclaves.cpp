class Solution {
public:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();


    vector<vector<int>>visit(n,vector<int>(m,0));
    
    queue<pair<int,int>>que;


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || j==0 || i == n-1 || j == m-1){
                if(grid[i][j] == 1){
                    que.push({i,j});
                    visit[i][j] = 1;
                }
            }
        }
    }

    while(!que.empty()){
        int row = que.front().first;
        int col = que.front().second;
        que.pop();
    

    /// traverse all 4 direction

    for(int i=0; i<4; i++){
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];

        if(nrow >=0 && nrow < n && ncol >=0 && ncol < m && visit[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
            que.push({nrow,ncol});
            visit[nrow][ncol] =1;
        }
    }

}

    int count = 0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 1 && visit[i][j] == 0){
                count++;
            }
        }
    }
    return count;

    }
};