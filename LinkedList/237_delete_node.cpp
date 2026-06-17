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
    void deleteNode(ListNode* node) {
        // ListNode*temp=node;
        // ListNode*secondLast;
        // while(temp->next!=NULL){
        //     ListNode*second=temp->next;
        //     cout<<temp->val<<"  -   "<<second->val<<endl;
        //     temp->val=second->val;
        //     secondLast=temp;
        //     temp=temp->next;
        // }
        // cout<<temp->val;
        // secondLast->next=NULL;
        // // free(temp);
        // // return node;


        node->val=node->next->val;
        node->next=node->next->next;
    }
};