# Last updated: 1/15/2026, 11:35:12 AM
1from collections import OrderedDict
2class LRUCache:
3
4    def __init__(self, capacity: int):
5        self.n = capacity
6        self.cache = OrderedDict()
7
8    def get(self, key: int) -> int:
9        if key not in self.cache:
10            return -1
11        else:
12            self.cache.move_to_end(key, last=True)
13            return self.cache[key]
14
15    def put(self, key: int, value: int) -> None:
16        if key not in self.cache and len(self.cache) == self.n:
17            self.cache.popitem(last=False)
18        self.cache[key] = value
19        self.cache.move_to_end(key, last=True)
20
21        
22
23
24# Your LRUCache object will be instantiated and called as such:
25# obj = LRUCache(capacity)
26# param_1 = obj.get(key)
27# obj.put(key,value)