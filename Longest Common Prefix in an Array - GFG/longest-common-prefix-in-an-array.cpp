//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class TrieNode
{	
    public:
    char val;
    vector<TrieNode*> child;
    int childCount;
    bool endOfWord;

    TrieNode(char val)
    {
        this->val = val;
        child.resize(26, NULL);
        childCount = 0;
        endOfWord = false;
    }

    ~TrieNode()
    {
        for(int i = 0; i < 26; i++)
        {
            if(child[i] != NULL)
            {
                delete child[i];
            }
        }
    }
};
    
void insert(TrieNode* root, string &word)
{
    TrieNode* cur = root;

    for(int idx = 0; idx < word.size(); ++idx)
    {   
        int diff = word[idx] - 'a';
        
        // If the child[diff] of cur is an empty node
        if (cur->child[diff] == NULL)
        {
            cur->child[diff] = new TrieNode(word[idx]);
            cur->childCount += 1;
        }

        cur = cur->child[diff];
    }

    // Marking the endOfWord of last character as true.
    cur->endOfWord = true;    
}


class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
          TrieNode* root = new TrieNode(' ');

    // Inserting each word into Trie
    for(int i = 0; i < N; i++)
    {
        string word = arr[i];
        insert(root, word);
    }

    // A string to store the longest common prefix
    string answer = "";

    // We will check if string prefix is common in all strings or not
    string prefix = arr[0];

    for(int idx = 0; idx < prefix.size(); idx++)
    {
        // Check if root has only one child.
        if (root->childCount == 1)
        {
            answer += prefix[idx];
            int diff = prefix[idx] - 'a';
            root = root->child[diff];
        }
        else
        {
            break;
        }
        
        //  Check if endOfWord of root is true.  
        if (root->endOfWord)
        {
            break;
        }
    }
    
    delete root;
    // cout<<<<endl;
    if(answer.length()==0)
    return "-1";
    
    return answer;

    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends