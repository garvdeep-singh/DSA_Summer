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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ListNode * temp1=headA;
        // ListNode * temp2=headB;
        // ListNode * intersection=NULL;
        // while(temp1->next!=NULL && temp2->next!=NULL){
        //     if(temp1->val=temp2->val){
        //         intersection=temp1;
        //         temp1=temp1->next;
        //         temp2=temp2->next;
        //     }
        //     else{
        //         intersection=NULL;
        //     }
        // }
        // return intersection;


        // for(auto it:mp){
        //     cout<<(it.first)->val<<" - "<<it.second<<endl;
        // }
        // return headB;







        // unordered_map<int,int>mp;
        // while(temp1!=NULL){
        //     mp[temp1->val]++;
        //     temp1=temp1->next;
        // }

        // while(temp2!=NULL){
        //     mp[temp2->val]++;
        //     temp2=temp2->next;
        // }

        // for(auto it:mp){
        //     cout<<it.first<<" - "<<it.second<<endl;
        // }
        // return headB;




        // unordered_map<ListNode*,int>mp;
        // ListNode * temp1=headA;
        // ListNode * temp2=headB;
        // ListNode * intersection=NULL;

        // while(temp1!=NULL){
        //     mp[temp1]++;
        //     temp1=temp1->next;
        // }

        // while(temp2!=NULL){
        //     if(mp.find(temp2)!=mp.end()){
        //         cout<<temp2->val;
        //         return temp2;
        //     }
        //     temp2=temp2->next;
        //     mp[temp2]++;
        // }
        // return NULL;


// //Approach 1
//         unordered_map<ListNode*,int>mp;
//         ListNode * temp1=headA;
//         ListNode * temp2=headB;
//         ListNode * intersection=NULL;

//         int c1=0;
//         int c2=0;
//         while(temp1!=NULL){
//             c1++;
//             temp1=temp1->next;
//         }
//         while(temp2!=NULL){
//             c2=c2+1;
//             temp2=temp2->next;
//         }
//         temp1=headA;
//         temp2=headB;
//         if(c1>c2){
//             for(int i=0;i<c1-c2;i++){
//                 temp1=temp1->next;
//             }
//         }
//         else{
//             for(int i=0;i<c2-c1;i++){
//                 temp2=temp2->next;
//             }

//         }

//         while(temp1!=NULL){
//             if(temp1==temp2){
//                 return temp1;
//             }
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }
//         return temp1;


//Appraoch 2

        unordered_map<ListNode*, int> mp;

        ListNode* temp1 = headA;

        ListNode* temp2 = headB;

        while (temp1 != NULL) {

            mp[temp1]++;

            temp1 = temp1->next;

        }

        while (temp2 != NULL) {

            if (mp.find(temp2) != mp.end()) {

                return temp2;

            }

            temp2 = temp2->next;

        }

        return NULL;
        
    }
};