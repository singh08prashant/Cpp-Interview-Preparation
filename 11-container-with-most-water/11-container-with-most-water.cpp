class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int max_water=0;
        
        while(i<=j){
            int curr_water=min(height[i],height[j])*(j-i);
            max_water=max(max_water, curr_water);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        return max_water;
    }
};