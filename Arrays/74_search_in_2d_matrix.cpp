class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int n=rows*columns;
        int start=0;
        int end=n-1;
        // int mid=start+(end-start)/2;
        while(start<=end){
            int mid=start+(end-start)/2;
            int ele = matrix[mid/columns][mid%columns];
            if(ele==target){
                return true;
            }
            if(ele>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        return false;
    }
};