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
    
        bool isPalindrome(ListNode *head) {
        ListNode *ptr = head;
        stack<int>s;
        while(ptr)
        {
            s.push(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr)
        {
            if(ptr->val != s.top())
                return false;
            s.pop();
            ptr = ptr->next;
        }
            return true;
    }
};
