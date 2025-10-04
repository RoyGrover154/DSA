class Solution {
    private:
    void dfs(int row, int col, vector<vector<int>>&ans,vector<vector<int>>image, int newcolor, int delRow[], int delCol[], int iniColor){

        ans[row][col] = newcolor;
        int n = image.size();
        int m = image[0].size();


        for(int i=0; i<4; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            // check for void coordinate
            // then check for Same initial colour and unvisited pixel

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == iniColor && ans[nrow][ncol] != newcolor){

                dfs(nrow, ncol, ans, image , newcolor, delRow, delCol, iniColor);
            }
        }
    }



public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];

        vector<vector<int>>ans = image;

        // delta row and delta col for neighbour

        int delRow[4] = {-1,0,1,0};
        int delCol[4] = {0,1,0,-1};

        dfs(sr, sc, ans, image, color, delRow, delCol, inicolor);

        return ans;

    }
};