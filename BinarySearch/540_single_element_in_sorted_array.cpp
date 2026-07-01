class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len=nums.size();
        int s=0;
        int e=len-1;
        int mid=s+(e-s)/2;
        if(mid%2!=0){
            mid--;
        }

        while(s<e){
            if(nums[mid]==nums[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
            if(mid%2!=0){
                mid--;
            }
        }
        return nums[mid];
    }
};