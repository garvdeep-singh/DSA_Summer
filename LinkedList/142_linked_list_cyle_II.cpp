/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // stack<int> st;
        // ListNode *temp=head;
        // st.push(st.push(temp->val));
        // temp=temp->next;
        // while(temp->next!=NULL){
        //     if(temp->val==st.top()){}
        // }
        // unordered_map<int,int> mp;
        // ListNode *temp=head;
        // while(temp!=NULL){
        //     mp[temp->val]++;
        // }
        // int looper=0;
        // for(auto it:mp){
        //     if(it.second==2){
        //         looper=it.first;
        //     }
        // }
        // temp=head;
        ListNode*temp=head;
        unordered_map<ListNode*,int> mp;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return temp;
            }
            mp[temp]=1;
            temp=temp->next;
        }
        return NULL;

    }
};