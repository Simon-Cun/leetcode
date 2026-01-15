# Last updated: 1/14/2026, 5:21:08 PM
1from collections import OrderedDict
2class LRUCache:
3
4    def __init__(self, capacity: int):
5        self.cache = OrderedDict()
6        self.n = capacity
7        
8
9    def get(self, key: int) -> int:
10        if key in self.cache:
11            self.cache.move_to_end(key)
12            return self.cache[key]
13        return -1
14
15    def put(self, key: int, value: int) -> None:
16        if len(self.cache) == self.n and key not in self.cache:
17            self.cache.popitem(last=False)
18        self.cache[key] = value
19        self.cache.move_to_end(key)
20        
21
22
23# Your LRUCache object will be instantiated and called as such:
24# obj = LRUCache(capacity)
25# param_1 = obj.get(key)
26# obj.put(key,value)