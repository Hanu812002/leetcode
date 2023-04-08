/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
      if(node==NULL)
          return node;
         unordered_map<int,Node*>m;
        
        queue<Node*> q;
        q.push(node);
        Node* n=new Node(node->val);
        m[node->val]=n;
        
        while(!q.empty()){
            Node* t=q.front();
            q.pop();
            
            for(auto i:t->neighbors){
                if(m.find(i->val)==m.end()){
                    m[i->val]=new Node(i->val);
                    q.push(i);
                }
                (m[t->val]->neighbors).push_back(m[i->val]);
            }
        }
        
        return m[node->val];
    
    }
};