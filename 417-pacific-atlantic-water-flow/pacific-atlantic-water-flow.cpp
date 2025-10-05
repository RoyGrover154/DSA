class Solution {
    private:

      void dfs(int row, int col, vector<vector<bool>>&visited, vector<vector<int>>&heights){

            visited[row][col] = true;

            for(auto &d : directions){
                int x = row + d[0], y = col + d[1];

                if(x < 0 || x >= n || y < 0 || y >= m) continue;
                if(visited[x][y]) continue;
                if(heights[x][y] < heights[row][col]) continue;

                dfs(x,y,visited,heights);
            }
        }

    public:

    int n,m;
    vector<vector<int>>directions = {{1,0},{-1,0},{0,1},{0,-1}};

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
         n = heights.size();
         m = heights[0].size();

        vector<vector<bool>>pacific(n, vector<bool>(m, false));
        vector<vector<bool>>atlantic(n,vector<bool>(m,false));


        for(int i=0; i<n; i++){
            dfs(i,0, pacific,heights);
            dfs(i,m-1,atlantic,heights);
        }

        for(int j=0; j<m; j++){
            dfs(0, j , pacific , heights);
            dfs(n-1, j , atlantic,heights);
        }

        vector<vector<int>>result;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    result.push_back({i,j});
                }
            }
        }
        return result;
    }
};