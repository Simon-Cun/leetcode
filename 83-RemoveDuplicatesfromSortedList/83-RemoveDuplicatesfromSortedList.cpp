// Last updated: 4/24/2026, 4:56:13 PM
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
14        ListNode* prev = nullptr;
15        ListNode* curr = head;
16        while (curr) {
17            if (prev and prev->val == curr->val) {
18                prev->next = curr->next;
19                delete curr;
20                curr = prev->next;
21            } else {
22                prev = curr;
23                curr = curr->next;
24            }
25        }
26        return head;
27    }
28};