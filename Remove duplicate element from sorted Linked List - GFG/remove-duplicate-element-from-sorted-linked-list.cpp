//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
   if(head->next==NULL)
   return head;
   
   Node* prev=head;
   Node* n=head->next;
   
   while(n!=NULL){
      while(n->next!=NULL && prev->data==n->data){
                                // cout<<n->data<<"  "<<prev->data<<endl;

          n=n->next;
      }  
                //   cout<<prev->data<<"  "<<n->data<<endl;

      if(n->next==NULL && prev->data==n->data){
                    //   cout<<n->data<<"  "<<prev->data<<endl;
//  cout<<n<<" "<<prev<<endl;
          prev->next=NULL;
          break;
      }
                      //cout<<n->data<<"  "<<prev->data<<endl;

      prev->next=n;
      prev=prev->next;
      n=n->next;
   }
 
   return head;
}