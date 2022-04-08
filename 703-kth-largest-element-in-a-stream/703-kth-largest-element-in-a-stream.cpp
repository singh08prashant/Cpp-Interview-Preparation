class KthLargest {
    
private:
    priority_queue<int>pq;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(auto &x:nums){
            pq.push(-1*x);
            if(pq.size()>K)
                pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(-1*val);
        if(pq.size()>K)
            pq.pop();
        return pq.top()*-1;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */