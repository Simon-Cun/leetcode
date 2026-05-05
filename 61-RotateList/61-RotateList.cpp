// Last updated: 5/5/2026, 4:12:03 PM
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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if (not head) return head;
15        int size = 0;
16        ListNode* prev = nullptr;
17        ListNode* curr = head;
18        while (curr) {
19            ++size;
20            prev = curr;
21            curr = curr->next;
22        }
23        prev->next = head;
24        int rotates = size - (k % size);
25        curr = head;
26        while (--rotates) curr = curr->next;
27        cout << curr->val;
28        head = curr->next;
29        curr->next = nullptr;
30        return head;
31        
32    }
33};