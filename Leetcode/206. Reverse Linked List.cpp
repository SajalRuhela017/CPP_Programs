// Given the head of a singly linked list, reverse the list, and return the reversed list.

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* newHead = NULL;
        while(head != NULL)
        {
            ListNode* temp = head->next;
            head->next = newHead;
            newHead = head;
            head = temp;
        }
        return newHead;
    }
};