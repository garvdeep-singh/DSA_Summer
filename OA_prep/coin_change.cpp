#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int arr[];
    vector<int> arr(n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalSum+=arr[i];
    }
    vector<int> arr2=arr;
    sort(arr2.begin(),arr2.end(),greater<int>());
    int min=arr2[arr2.size()-1];

    bool notfound=true;
    int j=0;
    while(notfound){
        if(totalSum+j>=0 && j>=min){
            cout<<j/2;
            break;
            notfound=false;
        }
        j++;
    }
    // cout<<j;
    return j/2;
}