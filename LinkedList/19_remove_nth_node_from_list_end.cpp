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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode*temp=head;
        int c=1;
        while(temp->next!=NULL){
            c++;
            temp=temp->next;
        }
        cout<<"Length - "<<c<<endl;
        int position=c-n+1;
        cout<<"Position - "<<position;

        if(position==1){
            return head->next;
        }
        // if(position==c){
        //     delete temp;
        //     return head;
        // }
        temp=head;
        for(int i=1;i<position-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};