class Solution {
public:

    bool isvalid(char ch, int row, int col, vector<vector<char>>& board){
        for(int j=0; j<9; j++){
            if(board[row][j] == ch) return false;
        }
        for( int i=0; i<9; i++){
            if(board[i][col] == ch) return false;
        }

        int r1 = 3 * (row/3);
        int c1 = 3 * (col/3);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(board[r1 + i][c1 +j] == ch) return false;
            }
        }
        return true;
    }

    bool checkstatus(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
          for(int j=0; j<9; j++){
            if(board[i][j] == '.'){
                for(char ch='1'; ch<='9'; ch++){
                    if(isvalid(ch,i,j,board)){
                        board[i][j] = ch;
                        if(checkstatus(board)) return true;
                        board[i][j] = '.';
            
                    }
                }
                return false;
            }
          }
        }
        return true;
    }


    void solveSudoku(vector<vector<char>>& board) {
        
         checkstatus(board);

    }
};