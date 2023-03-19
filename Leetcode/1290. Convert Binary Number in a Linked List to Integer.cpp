// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

// The most significant bit is at the head of the linked list.

class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        ListNode* it = head;
        int ans = 0, i = 0;
        while(it != NULL)
        {
            ans <<= 1;
            ans |= it->val;
            it = it->next;
        }
        return ans;
    }
};