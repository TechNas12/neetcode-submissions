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
    void reorderList(ListNode* head) {
        if(!head || !head->next){
            return;
        }
        ListNode* mid = head;
        ListNode* fast = head;
        while(fast && fast->next){
            mid = mid->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = mid->next;
        mid->next = nullptr;
        
        //Reversing the list
        ListNode* reverse = nullptr;
        ListNode* curr = secondHalf;
        ListNode* next_node = secondHalf;
        while(curr){
            next_node = curr->next;
            curr->next = reverse;
            reverse = curr;
            curr = next_node;
        }

        ListNode* l2 = reverse;
        ListNode* l1 = head;
        while(l2){
            ListNode* l1next = l1->next;
            ListNode* l2Next = l2->next;
            l1->next = l2;
            l2->next = l1next;
            l1 = l1next;
            l2 = l2Next;
        }
    }
};
