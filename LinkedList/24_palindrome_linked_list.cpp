class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode* temp = head;

        while (temp) {
            n++;
            temp = temp->next;
        }

        stack<int> st;
        temp = head;

        for (int i = 0; i < n / 2; i++) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Skip middle node for odd length
        if (n % 2 == 1) {
            temp = temp->next;
        }

        while (temp) {
            if (st.top() != temp->val) {
                return false;
            }
            st.pop();
            temp = temp->next;
        }

        return true;
    }
};