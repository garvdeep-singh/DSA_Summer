class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        if(intervals.size()==1){
            return intervals;
        }
        // sort(intervals.begin(), intervals.end());
        // vector<int>current(2,0);
        // vector<vector<int>>result;
        // current=intervals[0];
        // int currentEnd=current[1];
        // for(int it=1;it<intervals.size();it++){
        //     if(current[1]>=intervals[it][0]){
        //         currentEnd=max(currentEnd,intervals[it][1]);
        //         current[1]=currentEnd;
        //     }
        //     else{
        //         result.push_back(current);
        //         current=intervals[it];
        //     }
        // }
        // result.push_back(current);
        // return result;
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;

    vector<int> current = intervals[0];

    for(int i = 1; i < intervals.size(); i++) {

        if(current[1] >= intervals[i][0]) {

            current[1] = max(current[1], intervals[i][1]);

        }

        else {

            result.push_back(current);

            current = intervals[i];

        }

    }

    result.push_back(current);
    return result;



        // vector<int> v(2,0);
        // v[0]=intervals[0][0];
        // v[1]=intervals[0][1];
        // vector<vector<int>>result;
        // // int i=1;

        // bool increasing = true;
        // int i=0;
        // int k=0;
        // while(i<intervals.size()-1){
        //     if(v[1]>intervals[i+1][0]){
        //         i++;
        //         v[1]=intervals[i+1][1];
        //         increasing=true;
        //         continue;
        //     }
        //     else{
        //         increasing=false;
        //         // result.push_back({v[0],intervals[i][1]});
        //         i++;
        //         // v[0]=intervals[i][0];
        //     }
        //     if(!increasing){
        //         result.push_back({v[0],intervals[i-1][1]});
        //         v[0]=intervals[i][0];;
        //         k++;
        //     }
        // }
        // return result;




















        // sort(intervals.begin(), intervals.end());
        // // return intervals;
        // vector<int> v(2,0);
        // vector<vector<int>>result;
        // int i=0;
        // for(i=0;i<intervals.size()-1;i++){
        //     v[0]=(intervals[i][0]);
        //     if(intervals[i][1]<intervals[i+1][0]){
        //         v[1]=(intervals[i][1]);
        //         i++;
        //         // result.push_back(v);
        //     }
        //     else{
        //         v[1]=intervals[i+1][1];
        //         // i++;
        //     }
        //     result.push_back(v);
        // }
        // // result.push_back(intervals[i]);
        // return result;
    }
};