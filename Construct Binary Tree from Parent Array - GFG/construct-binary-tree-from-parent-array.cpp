//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void sort_and_print(vector <int> &v)
{
    sort( v.begin() , v.end() );
    for( int i=0 ; i<v.size() ; i++ )
        cout<< v[i] << " ";
    v.clear();
}

void printLevelOrder(struct Node* root)
{
    vector <int> v;
    queue <Node*> q;
    
    q.push(root);
    
    Node* next_row = NULL;
    
    while(!q.empty())
    {
        Node* n = q.front();
        q.pop();
        
        if(n==next_row)
        {
            sort_and_print(v);
            next_row = NULL;
        }
        
        v.push_back(n->data);
        
        if(n->left)
        {
            q.push(n->left);
            if(next_row == NULL) next_row = n->left;
        }
        
        if(n->right)
        {
            q.push(n->right);
            if(next_row == NULL) next_row = n->right;
        }
    }
    sort_and_print(v);
}

Node *createTree(int parent[], int n);

/* Driver program to test above function*/


// } Driver Code Ends
/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution{
  public:
    //Function to construct binary tree from parent array.
    void fun(Node *n,unordered_map<int,vector<int>>&mp){
        if(mp.find(n->data)==mp.end())
         {
             n->left=NULL;
             n->right=NULL;
             return;
         }
        
        else{
            Node *l=NULL;
            Node *r=NULL;
            vector<int>v=mp[n->data];
            if(v.size()==2){
                l=new Node(v[0]);
                r=new Node(v[1]);
                n->left=l;
                n->right=r;
                fun(l,mp);
                fun(r,mp);
            }
            else{
                l=new Node(v[0]);
                n->left=l;
                n->right=r;
                fun(l,mp);
                
            }
        }
    }
    Node *createTree(int parent[], int N)
    {
        // Your code here
        unordered_map<int,vector<int>>mp;
        Node *n=NULL;
        for(int i=0;i<N;i++)
        {
            if(parent[i]==-1)
            {
                    n=new Node(i);
            }
            else
            mp[parent[i]].push_back(i);
        }
    
       fun(n,mp);
       
        return n;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for( int i=0 ; i<n ; i++ )
            cin>> a[i];
            
        Solution ob;
        
        Node *res = ob.createTree(a,n);
        
        printLevelOrder(res);
        cout<<endl;
    }

    return 0;
}


// } Driver Code Ends