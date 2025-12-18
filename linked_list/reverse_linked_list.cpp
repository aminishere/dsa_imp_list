//lc 206
//recusrion
class Solution {
public:
    ListNode* reverse(ListNode* root){
        //bc
        if(!root or !root->next)
        return root;
        ListNode* last = reverse(root->next);
        root->next->next=root; // reversing forward link to backward
        root->next= NULL;
        return last; // always returning tail, no fixation here
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};
//-------------------------
//iterative

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)return head;
        ListNode* curr= head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* temp= curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
