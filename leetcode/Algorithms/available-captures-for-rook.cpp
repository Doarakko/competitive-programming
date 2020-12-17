class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        // search rook
        int x, y;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == 'R'){
                    x = j;
                    y = i;
                }
            }
        }
        
        int cnt = 0;
        // top
        for(int i = y - 1; i >= 0; i--){
            if(board[i][x] == 'p'){
                cnt++;   
                break;
            }else if(board[i][x] == '.'){
                continue;
            }else{
                break;
            }
        }
        // bottom
        for(int i = y + 1; i < board.size(); i++){
            if(board[i][x] == 'p'){
                cnt++;
                break;
            }else if(board[i][x] == '.'){
                continue;
            }else{
                break;
            }
        }
        // left
        for(int i = x - 1; i >= 0; i--){
            if(board[y][i] == 'p'){
                cnt++;   
                break;
            }else if(board[y][i] == '.'){
                continue;
            }else{
                break;
            }
        }
        // right
        for(int i = x + 1; i < board[0].size(); i++){
            if(board[y][i] == 'p'){
                cnt++;   
                break;
            }else if(board[y][i] == '.'){
                continue;
            }else{
                break;
            }
        }
        return cnt;
    }
};