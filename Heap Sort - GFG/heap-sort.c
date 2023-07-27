//{ Driver Code Starts
// Heap Sort in C
#include <stdio.h>
  
// Function to swap the the position of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
// Print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  
// } Driver Code Ends
//User function Template for C


void heapify(int arr[], int n, int i) {
    int lar=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n && arr[l]>arr[lar])
     lar=l;
     
    if(r<n && arr[r]>arr[lar])
    lar=r;
    
    if(lar!=i)
    {
        swap(&arr[lar],&arr[i]);
        heapify(arr,n,lar);
    }
    
}

// Main function to do heap sort
void buildHeap(int arr[], int n) {
    // Build max heap
    int s=(n/2) -1;
    for(int i=s;i>=0;i--){
        heapify(arr,n,i);
    }
   for (int i = n - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }

}


//{ Driver Code Starts.
  
// Driver code
int main() {
    int t;
    scanf("%d",&t);
    while (t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    buildHeap(arr, n);
    printArray(arr, n);
    }
  }
// } Driver Code Ends