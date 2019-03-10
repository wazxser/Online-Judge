class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty() || word.length() == 0){
            return false;
        }
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> visit(m,vector<int>(n,0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(dfs(i, j, board, word, visit, 0))
                    return true;
            }
        }
        
        return false;
    }
    
    bool dfs(int i, int j, vector<vector<char>> &board, string &word, vector<vector<int>> &visit, int pos){
        int m = board.size();
        int n = board[0].size();
        if(i < 0 || i > m-1 || j < 0 || j > n-1){
            return false;
        }
        if(visit[i][j]){
            return false;
        }
        if(board[i][j] != word[pos]){
            return false;
        }
        if(pos == word.length()-1){
            return true;
        }
        visit[i][j] = 1;
        if(dfs(i + 1, j, board, word, visit, pos+1)
          || dfs(i, j+1, board, word, visit, pos+1)
          || dfs(i-1, j, board, word, visit, pos+1)
          || dfs(i, j-1, board, word, visit, pos+1))
            return true;
        visit[i][j] = 0;
        
        return false;
    }
};
