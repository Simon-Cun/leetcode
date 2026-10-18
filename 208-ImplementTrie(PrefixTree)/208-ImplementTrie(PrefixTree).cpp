// Last updated: 10/18/2026, 1:49:14 PM
1class Trie {
2    struct Node {
3        unordered_map<char, Node*> characters;
4        bool isEnd = false;
5    };
6    Node* root;
7    Node* find(string word) {
8        Node* curr = root;
9        for (auto& i : word) {
10            if (curr->characters.find(i) != curr->characters.end()) {
11                curr = curr->characters[i];
12            } else {
13                return nullptr;
14            }
15        }
16        return curr;
17    }
18public:
19    Trie() {
20        root = new Node();
21    }
22    
23    void insert(string word) {
24        Node* curr = root;
25        for (auto& i : word) {
26            if (curr->characters.find(i) == curr->characters.end()) {
27                curr->characters[i] = new Node();
28            }
29            curr = curr->characters[i];
30        }
31        curr->isEnd = true;
32    }
33    
34    bool search(string word) {
35        Node* curr = find(word);
36        return curr && curr->isEnd;
37    }
38    
39    bool startsWith(string prefix) {
40        return find(prefix);
41    }
42};
43
44/**
45 * Your Trie object will be instantiated and called as such:
46 * Trie* obj = new Trie();
47 * obj->insert(word);
48 * bool param_2 = obj->search(word);
49 * bool param_3 = obj->startsWith(prefix);
50 */