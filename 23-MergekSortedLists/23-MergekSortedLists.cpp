// Last updated: 4/23/2026, 3:23:45 PM
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
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14        auto comp = [](const ListNode* a, const ListNode* b) { return a->val > b->val; };
15        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> pq(comp);
16        for (auto& i : lists) if (i) pq.push(i);
17
18        if (pq.empty()) return nullptr;
19        
20        ListNode* head = pq.top();
21        pq.pop();
22        if (head->next) pq.push(head->next);
23        ListNode* tail = head;
24        while (!pq.empty()) {
25            tail->next = pq.top();
26            pq.pop();
27            tail = tail->next;
28            if (tail->next) pq.push(tail->next);
29        }
30        tail->next = nullptr;
31        return head;
32    }
33};