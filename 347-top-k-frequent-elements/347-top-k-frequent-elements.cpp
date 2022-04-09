class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        priority_queue<pair<int, int>>max_heap;
        for(auto x:mpp){
            max_heap.push({-1*x.second,x.first});
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
        
        vector<int>ans;
        while(!max_heap.empty()){
            ans.push_back(max_heap.top().second);
            max_heap.pop();
        }
        
        return ans;
    }
};