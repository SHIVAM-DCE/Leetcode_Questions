// class Solution {
// private:
//     bool CanPlace(int row,int col,vector<string>board,int n){
//         int tr=row,tc=col;
//         while(row>=0 && col>=0) if(board[row--][col--]=='Q') return false;

//         row=tr,col=tc;
//         while(col>=0) if(board[row][col--]=='Q') return false;

//         col=tc;
//         while(row<n && col>=0) if(board[row++][col--]=='Q') return false;
//         return true;
//     }

//     void solve(int col,vector<vector<string>>& res,vector<string>& board,int n){
//         if(col==n){
//             res.push_back(board);
//             return;
//         }
//         for(int row=0;row<n;row++){
//             if(CanPlace(row,col,board,n)){
//                 board[row][col]='Q';
//                 solve(col+1,res,board,n);
//                 board[row][col]='.';
//             }
//         }
//     }
// public:
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>>res;
//         vector<string>board(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++){
//             board[i]=s;
//         }
//         solve(0,res,board,n);
//         return res;
//     }
// };





class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& result, int n,
               vector<int>& leftRow, vector<int>& lowerDiagonal, vector<int>& upperDiagonal) {
        if (col == n) {
            result.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;
                solve(col + 1, board, result, n, leftRow, lowerDiagonal, upperDiagonal);
                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
        solve(0, board, result, n, leftRow, lowerDiagonal, upperDiagonal);
        return result;
    }
};