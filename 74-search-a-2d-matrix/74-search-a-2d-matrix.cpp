class Solution {
public:
    
    bool binarySearch1D(vector<int>arr, int K)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        // if element found return true
        if (arr[mid] == K)
            return true;
 
        // if middle less than K then
        // skip the left part of the
        // array else skip the right part
        if (arr[mid] < K)
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    // if not found return false
    return false;
}
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int low = 0;
    int high = matrix.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        // if the element lies in the range
        // of this row then call
        // 1-D binary search on this row
        if (target >= matrix[mid][0]
            && target <= matrix[mid][matrix[0].size() - 1])
            return binarySearch1D(matrix[mid], target);
 
        // if the element is less then the
        // starting element of that row then
        // search in upper rows else search
        // in the lower rows
        if (target < matrix[mid][0])
            high = mid - 1;
        else
            low = mid + 1;
    }
 
    // if not found
    return false;
    }
};