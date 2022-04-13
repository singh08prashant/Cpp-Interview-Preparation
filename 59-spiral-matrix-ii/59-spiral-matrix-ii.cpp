class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>ans(n,vector<int>(n,0));
        
        int start_row = 0,start_col = 0;
        int end_row = n-1, end_col = n-1;
        int num = 1;
        
        while(start_row<=end_row and start_col<=end_col){
            
            for(int i=start_col;i<=end_col;i++){
                ans[start_row][i]=num++;
            }
            start_row++;
            
            for(int i=start_row;i<=end_row;i++){
                ans[i][end_col]=num++;
            }
            end_col--;
            
            for(int i=end_col;i>=start_col;i--){
                ans[end_row][i]=num++;
            }
            end_row--;
            
            for(int i=end_row;i>=start_row;i--){
                ans[i][start_col]=num++;
            }
            start_col++;
        }
        
        return ans;
    }
};