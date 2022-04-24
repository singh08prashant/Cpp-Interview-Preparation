class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>mpp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string str1 = to_string(board[i][j])+"in row"+to_string(i);
                    string str2 = to_string(board[i][j])+"in col"+to_string(j);
                    string str3 = to_string(board[i][j])+"in grid"+to_string(i/3)+"-"+to_string(j/3);

                   if(mpp.find(str1)!=mpp.end() || mpp.find(str2)!= mpp.end() || mpp.find(str3)!= mpp.end())
                        return false;
                    else{
                        mpp[str1]++;
                        mpp[str2]++;
                        mpp[str3]++;
                    }
                }
                
            }
        }
        return true;
    }
};