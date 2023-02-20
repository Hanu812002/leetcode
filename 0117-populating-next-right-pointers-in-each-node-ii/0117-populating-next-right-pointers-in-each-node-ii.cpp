/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        if(root==NULL)
            return root;
        
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            Node* p=NULL;
            for(int i=0;i<s;i++){
            Node* r=q.front();  q.pop();
                
            r->next=p;
            p=r;
            
                if(r->right)
                q.push(r->right);
                
                if(r->left)
                    q.push(r->left);
            }
        }
        return root;

    }
};