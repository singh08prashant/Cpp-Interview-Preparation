class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>mag_hash(26,0);
        
        for(int i=0;i<magazine.length();i++){
            mag_hash[magazine[i]-'a']++;
        }
        
        for(int i=0;i<ransomNote.length();i++){
            if(mag_hash[ransomNote[i]-'a']==0)
                return false;
            mag_hash[ransomNote[i]-'a']--;
        }
        
        return true;
    }
};