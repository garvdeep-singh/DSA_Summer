class Solution {
public:

    void shiftleft(vector<int>& nums,int k){
        for(int i=k;i<nums.size()-1;i++){
            // swap(nums[k],nums[k+1]);
            nums[i]=nums[i+1];
        }

    }
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int duplicates=0;
        int len=nums.size();

        while(j<len-duplicates){
            if(nums[i]==nums[j]){
                shiftleft(nums,j);
                duplicates++;
            }
            else{
                i++;
                j++;
            }
        }
        return nums.size()-duplicates;
        
    }
};

































// class Solution {
// public:
//     void shiftleft(vector<int>& nums,int k,int duplicates){
//         for(int i=k;i<nums.size()-1-duplicates;i++){
//             // swap(nums[k],nums[k+1]);
//             nums[k]=nums[k+1];
//         }

//     }
//     int duplicates=0;
//     int removeDuplicates(vector<int>& nums) {
//         for(int i=0;i<nums.size()-1-duplicates;i++){
//             if(nums[i]==nums[i+1]){
//                 duplicates++;
//                 shiftleft(nums,i+1,duplicates);        
//             }
//         }
//         return nums.size()-duplicates;
//     }
// };