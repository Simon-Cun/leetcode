// Last updated: 7/26/2026, 10:07:16 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (!head) return head;
15        ListNode* curr = head;
16        while (curr->next) {
17            if (curr->val == curr->next->val) {
18                ListNode* tmp = curr->next;
19                curr->next = curr->next->next;
20                delete tmp;
21            } else {
22                curr = curr->next;
23            }
24        }
25        return head;
26    }
27};