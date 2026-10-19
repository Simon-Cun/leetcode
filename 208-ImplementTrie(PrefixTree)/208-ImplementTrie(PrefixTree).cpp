// Last updated: 10/18/2026, 6:50:15 PM
1class Trie {
2private:
3    struct Node {
4        unordered_map<char, Node*> c;
5        bool isEnd = false;
6    };
7    
8    Node* find(string word) {
9        Node* curr = root;
10        for (auto& i : word) {
11            if (curr->c.find(i) != curr->c.end()) {
12                curr = curr->c[i];
13            } else {
14                return nullptr;
15            }
16        }
17        return curr;
18    }
19    Node* root;
20public:
21    Trie() {
22        root = new Node();
23    }
24    
25    void insert(string word) {
26        Node* curr = root;
27        for (auto& i : word) {
28            if (curr->c.find(i) == curr->c.end()) {
29                curr->c[i] = new Node();
30            }
31            curr = curr->c[i];
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
42        return find(prefix);
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