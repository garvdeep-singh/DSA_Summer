class Solution {
public:
    int hIndex(vector<int>& citations) {
        // return citations[citations.size()/2];
        int s=0;
        int e=citations.size()-1;
        int n=citations.size();
        int ans=n;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(citations[mid]>=n-mid){
                // return citations[mid];
                ans = mid;
                e = mid - 1;
            }
            else{
                s=mid+1;
            }
        }
        return n-ans;
    }
};