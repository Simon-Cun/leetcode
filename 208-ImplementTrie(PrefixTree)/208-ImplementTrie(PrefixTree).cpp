// Last updated: 10/17/2026, 4:36:06 PM
1class Trie {
2    struct Node {
3        unordered_map<char, Node*> children;
4        bool isEnd = false;
5    };
6    Node* root;
7
8    Node* find(const string& s) {
9        Node* curr = root;
10        for (auto& i : s) {
11            if (curr->children.find(i) == curr->children.end()) return nullptr;
12            curr = curr->children[i];
13        }
14        return curr;
15    }
16public:
17    Trie() {
18        root = new Node();
19    }
20    
21    void insert(string word) {
22        Node* curr = root;
23        for (auto& i : word) {
24            if (curr->children.find(i) == curr->children.end()) {
25                curr->children[i] = new Node();
26            } 
27            curr = curr->children[i];
28        }
29        curr->isEnd = true;
30    }
31    
32    bool search(string word) {
33        return find(word) && find(word)->isEnd;
34    }
35    
36    bool startsWith(string prefix) {
37        return find(prefix) != nullptr;
38    }
39};
40
41/**
42 * Your Trie object will be instantiated and called as such:
43 * Trie* obj = new Trie();
44 * obj->insert(word);
45 * bool param_2 = obj->search(word);
46 * bool param_3 = obj->startsWith(prefix);
47 */