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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast !=NULL && fast->next != NULL){
            slow=slow->next;
            fast=(fast->next)->next;
        }
        return slow;

        // ListNode *temp=head;
        // int c=0;
        // while(temp!=NULL){
        //     c++;
        //     temp=temp->next;
        // }
        // cout<<c;
        // int count=0;
        // temp=head;
        // while(count<c/2){
        //     temp=temp->next;
        //     count++;

        // }
        // return temp;
    }
};