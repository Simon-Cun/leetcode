// Last updated: 9/11/2026, 4:26:31 PM
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
14        if (!head) return nullptr;
15        ListNode* prev = head;
16        ListNode* curr = head->next;
17        while (curr) {
18            if (prev->val == curr->val) {
19                cout << curr->val << endl;
20                prev->next = curr->next;
21                delete curr;
22                curr = prev->next;
23            } else {
24                prev = curr;
25                curr = curr->next;
26            }
27            
28        }
29        return head;
30    }
31};