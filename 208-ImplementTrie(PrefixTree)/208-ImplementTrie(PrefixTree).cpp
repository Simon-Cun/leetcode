// Last updated: 10/17/2026, 4:40:58 PM
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
16
17private:
18    void destroy(Node* curr) {
19        for (auto& i : curr->children) destroy(i.second);
20        delete curr;
21    }
22public:
23    Trie() { root = new Node(); }
24
25    ~Trie() { destroy(root); }
26
27    
28    void insert(string word) {
29        Node* curr = root;
30        for (auto& i : word) {
31            if (curr->children.find(i) == curr->children.end()) {
32                curr->children[i] = new Node();
33            } 
34            curr = curr->children[i];
35        }
36        curr->isEnd = true;
37    }
38    
39    bool search(string word) {
40        Node* curr = find(word);
41        return curr && curr->isEnd;
42    }
43    
44    bool startsWith(string prefix) {
45        return find(prefix) != nullptr;
46    }
47};
48
49/**
50 * Your Trie object will be instantiated and called as such:
51 * Trie* obj = new Trie();
52 * obj->insert(word);
53 * bool param_2 = obj->search(word);
54 * bool param_3 = obj->startsWith(prefix);
55 */