/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
//     vector<vector<int>> levelOrder(Node* root) {
//         queue<Node*>q;
//         vector<vector<int>>ans;
//         if(root==NULL)
//             return {};
        
        
//         q.push(root);
        
        
//         while(!q.empty()){
//             int n=q.size();
//             vector<int>v;
            
//             for(int i=0;i<n;i++){
//                 Node *t=root;
//                 q.pop();
                
                
//                 for(auto c: t->children){
//                     q.push(c);
//                 }
//                 v.push_back(t->val);
//             }
//             ans.push_back(v);
//         }
//     return ans;
//     }
    
     vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};

        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        while (!empty(q)) {
            int q_size = size(q);
            ans.push_back({});
            while (q_size--) {
                const Node* node = q.front(); q.pop();
                ans.back().push_back(node->val);
                for (Node* child : node->children) {
                    q.push(child);
                }
            }
        }
        return ans;
    }
};