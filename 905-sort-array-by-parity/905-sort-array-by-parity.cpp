class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        vector<int>ans(size,0);
        int start = 0, end = size - 1;
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 1) {
                ans[end--] = nums[i];
            } else {
                ans[start++] = nums[i];
            }
        }
        return ans;
    }
};