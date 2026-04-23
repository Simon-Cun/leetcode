// Last updated: 4/23/2026, 3:14:48 PM
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
16        for (auto& i : lists) {
17            while (i) {
18                pq.push(i);
19                i = i->next;
20            }
21        }
22        if (pq.empty()) return nullptr;
23        
24        ListNode* head = pq.top();
25        pq.pop();
26        ListNode* tail = head;
27        while (!pq.empty()) {
28            tail->next = pq.top();
29            pq.pop();
30            tail = tail->next;
31        }
32        tail->next = nullptr;
33        return head;
34    }
35};