class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //dp approach
        vector<int>dp(nums.size(),1);
        int max_val=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            max_val=max(max_val,dp[i]);
        }
        // int max_val = max_element(dp.begin(), dp.end());
        return max_val;
    }
};