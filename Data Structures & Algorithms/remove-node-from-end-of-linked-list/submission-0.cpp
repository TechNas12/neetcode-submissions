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
        ListNode* dummy = new ListNode(0);
dummy->next = head;
ListNode* temp = dummy;  // ← starts at dummy, not head
ListNode* tail = head;   // ← starts at head

// move tail n steps
for(int i = 0; i < n; i++)
    tail = tail->next;

// move both until tail hits nullptr
while(tail){
    temp = temp->next;
    tail = tail->next;
}

// temp is now one before target
temp->next = temp->next->next;
return dummy->next;
    }
};