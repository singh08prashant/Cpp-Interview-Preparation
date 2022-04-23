class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }
        
        for(int i=0; i<nums2.size();i++){
            auto it = mpp.find(nums2[i]);
            if(it != mpp.end() && it->second > 0){
                ans.push_back(nums2[i]);
                it->second--;
            }
        }
        return ans;
    }
};