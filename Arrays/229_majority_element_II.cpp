class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // vector<int> v;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second>nums.size()/3){
        //         v.push_back(it.first);
        //     }
        // }
        // return v;

        //constant space
        vector<int> v;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        int count=0;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                count++;
                j++;
            }
            else{
                if(count>nums.size()/3){
                    v.push_back(nums[i]);
                }
                i=j;
                count=0;
            }
        }
        if(count>nums.size()/3){
            v.push_back(nums[i]);
        }
        return v;
        
    }
};