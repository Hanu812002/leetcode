class TrieNode{
public:
    bool isCompleteWord;
    TrieNode* children[26];

    TrieNode() {
        isCompleteWord = false; 
        memset(children, 0, sizeof(children)); 
    }
};



class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word){
            int idx = ch - 'a';
            if(node->children[idx]==NULL) node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isCompleteWord = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char ch : word){
            int idx = ch - 'a';
            if(node->children[idx]==NULL) return false;
            node = node->children[idx];
        }
        return node->isCompleteWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char ch : prefix){
            int idx = ch - 'a';
            if(node->children[idx]==NULL) return false;
            node = node->children[idx];
        }
        return true;
    }
};
