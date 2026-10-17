// Last updated: 10/17/2026, 4:39:45 PM
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
17    Trie() { root = new Node(); }
18
19    ~Trie() { destroy(root); }
20
21    void destroy(Node* curr) {
22        for (auto& i : curr->children) destroy(i.second);
23        delete curr;
24    }
25    void insert(string word) {
26        Node* curr = root;
27        for (auto& i : word) {
28            if (curr->children.find(i) == curr->children.end()) {
29                curr->children[i] = new Node();
30            } 
31            curr = curr->children[i];
32        }
33        curr->isEnd = true;
34    }
35    
36    bool search(string word) {
37        Node* curr = find(word);
38        return curr && curr->isEnd;
39    }
40    
41    bool startsWith(string prefix) {
42        return find(prefix) != nullptr;
43    }
44};
45
46/**
47 * Your Trie object will be instantiated and called as such:
48 * Trie* obj = new Trie();
49 * obj->insert(word);
50 * bool param_2 = obj->search(word);
51 * bool param_3 = obj->startsWith(prefix);
52 */