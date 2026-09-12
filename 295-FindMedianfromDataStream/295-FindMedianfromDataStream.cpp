// Last updated: 9/11/2026, 6:41:24 PM
1class MedianFinder {
2public:
3    priority_queue<int> maxHeap;
4    priority_queue<int, vector<int>, greater<int>> minHeap;
5    MedianFinder() {
6        
7    }
8    
9    void addNum(int num) {
10        maxHeap.push(num);
11        int tmp = maxHeap.top();
12        maxHeap.pop();
13        minHeap.push(tmp);
14        if (maxHeap.size() - minHeap.size() == 2 || maxHeap.size() - minHeap.size() == -2) {
15            tmp = minHeap.top();
16            minHeap.pop();
17            maxHeap.push(tmp);
18        }
19    }
20    
21    double findMedian() {
22        if (maxHeap.size() == minHeap.size()) {
23            return (maxHeap.top() + minHeap.top()) / 2.0;
24        } else if (maxHeap.size() > minHeap.size()) {
25            return maxHeap.top();
26        } else {
27            return minHeap.top();
28        }
29    }
30};
31
32/**
33 * Your MedianFinder object will be instantiated and called as such:
34 * MedianFinder* obj = new MedianFinder();
35 * obj->addNum(num);
36 * double param_2 = obj->findMedian();
37 */