//lc 82
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev= dummy; // will hold the recent unique list
        ListNode* curr = head; // will traverse the list
        while(curr){
            if(curr->next and curr->val == curr->next->val){
                int val= curr->val;
                while(curr and val==curr->val){
                    curr=curr->next;
                }
                prev->next=curr;
            }else{
                prev= curr;
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};
