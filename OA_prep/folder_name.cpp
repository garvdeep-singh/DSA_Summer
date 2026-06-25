#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int i=0;
    for(auto it:mp){
        if(mp[arr[i]]>1){
            arr[i]+="1";
            i++;
            continue;
        }
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
    
}