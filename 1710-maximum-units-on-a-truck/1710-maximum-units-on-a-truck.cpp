class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
	    
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int ans=0;
        for(auto box: boxTypes){
            int x=min(box[0],truckSize);  
            ans+=(x*box[1]);
            truckSize-=x;
            if(!truckSize) break;
        }
        return ans;
    }
};