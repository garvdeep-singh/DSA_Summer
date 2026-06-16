class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int i=m;i<nums1.size();i++){
        //     nums1[i]=nums2[i-m];
        // }
        // sort(nums1.begin(),nums1.end());

        // int j=0;
        // int i=0;
        // while(i<nums1.size()){
        //     if(nums1[i]<nums2[j]){
        //         i++;
        //         // cout<<nums1[i]<<" ";
        //     }
        //     else if(nums1[i]>nums2[j]) {
        //         // temp=nums1[i];
        //         int k=nums1.size()-1;
        //         while(k>i){
        //             nums1[k]=nums1[k-1];
        //             k--;
        //         }
        //         nums1[i]=nums2[j];
        //         // cout<<nums1[i]<<" ";
        //         j++;
        //         // i++;
        //     }
        //     else if(nums1[i]==0){
        //         while(j<nums2.size()){
        //             nums1[i]=nums2[j];
        //             i++;
        //             j++;
        //         }
        //     }
        // }

                int i = m - 1;

        int j = n - 1;

        int k = m + n - 1;

        while(i >= 0 && j >= 0){

            if(nums1[i] > nums2[j])

                nums1[k--] = nums1[i--];

            else

                nums1[k--] = nums2[j--];

        }

        while(j >= 0)

            nums1[k--] = nums2[j--];
        
    }
};