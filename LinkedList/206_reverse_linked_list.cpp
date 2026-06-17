/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*newHead=NULL;
    void reverse(ListNode* first,ListNode*second){
        if(second->next!=NULL){
            // second->next=first;
            reverse(second,second->next);
        }
        else{
            newHead=second;
        }
        second->next=first;
        first->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        // reverse(head);
        // HEAD=head
        // ListNode*first=head;
        // ListNode*second=head->next;
        reverse(head,head->next);
        // return first;
        return newHead;
        // while(second!=NULL){
        //     first->next=NULL;
        //     // first=second;
        //     second->next=first
        // }
        
    }
};