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
        ListNode* cNode1 = l1;
        ListNode* cNode2 = l2;
        vector<int> sums;
        bool remainder = false;
        while(cNode1 != nullptr || cNode2 != nullptr){
            int sum = 0;
            if(remainder == true){
                sum += 1;
                remainder = false;
            }
            if(cNode1 != nullptr){
                sum += cNode1->val;
                cNode1 = cNode1->next;
            }
            if(cNode2 != nullptr){
                sum += cNode2->val;
                cNode2 = cNode2->next;
            }
            if(sum >= 10){
                remainder = true;
                sum -= 10;
            }
            sums.push_back(sum);
        }
        if(remainder == true){
            sums.push_back(1);
        }
        ListNode* lastNode = nullptr;
        for(int i = sums.size() - 1; i >= 0; i--) {
            lastNode = new ListNode(sums.at(i), lastNode);
        }
        return lastNode;
    }
};