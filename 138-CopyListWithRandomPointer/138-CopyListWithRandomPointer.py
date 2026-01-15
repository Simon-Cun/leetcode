# Last updated: 1/14/2026, 5:18:20 PM
"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        copy_of_nodes = { None : None }
        curr = head
        while curr:
            copy_of_nodes[curr] = Node(curr.val)
            curr = curr.next
        curr = head
        while curr:
            copy_of_nodes[curr].next = copy_of_nodes[curr.next]
            copy_of_nodes[curr].random = copy_of_nodes[curr.random]
            curr = curr.next
        
        return copy_of_nodes[head]