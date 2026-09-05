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
void solve(ListNode* &head,ListNode* curr,ListNode* prev){
    //base case 
    if(curr == NULL){
        head = prev;
      //  prev = NULL;
        return;}
    //else 
    ListNode* forward = curr->next;
    solve(head,forward,curr);
    curr->next = prev;
    prev = curr;
    
    }

public:
    ListNode* reverseList(ListNode* head) {
 
        ListNode *curr = head;
        ListNode *prev = NULL;
        solve(head,curr,prev);

       
        return head;  
    }
};