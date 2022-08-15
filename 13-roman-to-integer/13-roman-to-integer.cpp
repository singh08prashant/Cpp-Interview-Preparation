class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        mpp.insert(make_pair('I',1));
        mpp.insert(make_pair('V',5));
        mpp.insert(make_pair('X',10));
        mpp.insert(make_pair('L',50));
        mpp.insert(make_pair('C',100));
        mpp.insert(make_pair('D',500));
        mpp.insert(make_pair('M',1000));
        
        int n = s.size();
        int prev = mpp[s[n - 1]] , result = prev , current;
   
        for(int i = n - 2 ; i >= 0 ; i--)
    {
        current = mpp[s[i]];
        if(current < prev)
            result -= current;
        else
            result += current;
        prev = current;
    }
    return result;
    }
};