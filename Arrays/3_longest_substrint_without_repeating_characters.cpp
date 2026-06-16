class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_map<char,int>mp;
        // int i=0;
        // int j=0;
        // int count=0;
        // while(j<s.size()){
        //     if(mp[s[j]]>0){
        //         count=max(j-i,count);
        //         i++;
        //         j=i;
        //         j++;

        //         mp.empty();
        //         // cout<<"First if"<<endl;
                
        //     }
        //     else{
        //         mp[s[j]]++;
        //         j++;
        //         // cout<<"second if"<<endl;
        //     }
        // }
        // return max(count,j-i);

        // unordered_map<char,int>mp;
        // int i=0;
        // int j=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>mp;
            // mp[s[i]]++;
            for(int j=i;j<s.size();j++){
                if(mp[s[j]]>0){
                    // count=max(j-i,count);
                    break;
                }
                // else{
                    mp[s[j]]++;
                    count=max(j-i+1,count);
                // }
            }
        }
        return count;
        
    }
};