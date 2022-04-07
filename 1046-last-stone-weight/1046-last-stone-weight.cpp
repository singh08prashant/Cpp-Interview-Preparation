class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;
        for(int e: stones) pq.push(e);

        while(pq.size() > 1){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            pq.push(a - b);
        }
        return pq.size() == 1 ? pq.top() : 0;
        
    }
};