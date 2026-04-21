// Last updated: 4/21/2026, 1:04:40 PM
1class MedianFinder {
2public:
3    priority_queue<int> max;    
4    priority_queue<int, vector<int>, greater<int>> min;
5    MedianFinder() {
6    }
7    
8    void addNum(int num) {
9        max.push(num);
10        if (!min.empty() and max.top() > min.top()) {
11            min.push(max.top());
12            max.pop();
13        }
14
15        if (max.size() > min.size() + 1) {
16            min.push(max.top());
17            max.pop();
18        } else if (min.size() > max.size() + 1) {
19            max.push(min.top());
20            min.pop();
21        }
22    }
23    
24    double findMedian() {
25        if (min.size() == max.size()) {
26            return (min.top() + max.top()) / 2.0;
27        } else if (max.size() > min.size()) {
28            return max.top();
29        } else {
30            return min.top();
31        }
32
33    }
34};
35
36/**
37 * Your MedianFinder object will be instantiated and called as such:
38 * MedianFinder* obj = new MedianFinder();
39 * obj->addNum(num);
40 * double param_2 = obj->findMedian();
41 */