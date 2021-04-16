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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        int carry = 0;
        while( l1 || l2){
            int n1 = l1  ? l1->val : 0;
            int n2 = l2  ? l2->val : 0;
            int num = n1 + n2 + carry;
            if(!head){
                head = tail = new ListNode(num%10);
            }else{
                tail->next = new ListNode( num%10 );
                tail = tail->next;
            }
            carry = num / 10;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
            }
        if(carry != 0){
            tail ->next = new ListNode(carry);
        }
    return head;
    }
};
