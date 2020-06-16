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
    bool isPalindrome(ListNode* head) {
        int s = 0;
        ListNode* rev = nullptr;
        ListNode* curNode = head;
        while(curNode != nullptr){
            rev = new ListNode(curNode->val, rev);
            curNode = curNode->next;
            s += 1;
        }
        curNode = head;
        for(int i = 0; i < s / 2; i++){
            if(rev->val != curNode->val){
                return false;
            }
            rev = rev->next;
            curNode = curNode->next;
        }
        return true;
    }
};