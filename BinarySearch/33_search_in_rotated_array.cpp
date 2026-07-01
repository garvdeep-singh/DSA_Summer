class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len=nums.size();
        int s=0;
        int e=len-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(target>=nums[s]&&target<nums[mid]){
                    // mid=e;
                    e=mid-1;
                }
                else{
                    s=mid+1;
                    // continue;
                }
            }
            else{
                
                // s=mid;
                if(target>nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }

            mid=s+(e-s)/2;
        }
        return -1;
    }
};