class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int>scores;
        
        for(auto &x: ops){
            if(x=="C"){
                scores.pop_back();
            }
            else if(x=="D"){
                int last = scores.back();
                scores.push_back(2*last);
            }
            else if(x=="+"){
                int n=scores.size();
                scores.push_back(scores[n-1]+scores[n-2]);
            }
            else{
                scores.push_back(stoi(x));
            }
        }
        
        return accumulate(scores.begin(), scores.end(), 0);
        
    }
};