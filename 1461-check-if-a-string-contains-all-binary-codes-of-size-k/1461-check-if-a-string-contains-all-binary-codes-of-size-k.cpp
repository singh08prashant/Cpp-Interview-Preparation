class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int i=0, n=s.size();
        unordered_set<string> set;
        for(i=0;i<=n-k;++i){
            set.insert(s.substr(i, k));
        }
        return set.size()==pow(2,k);
    }
};