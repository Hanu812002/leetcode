//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String A = br.readLine().trim();
            Solution ob = new Solution();
            String ans = ob.FirstNonRepeating(A);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


class Solution
{
    public String FirstNonRepeating(String A)
    {
        Queue<Character> q=new LinkedList<>();
        int[] arr=new int[26];
        Arrays.fill(arr,0);
        
        String str="";
        int n=A.length();
        
        for(int i=0;i<n;i++)
        {
           q.add(A.charAt(i));
           arr[A.charAt(i)-97]++;
            while(q.size() != 0 && arr[q.peek()-97] != 1){
                q.poll();
            }
            
            if(q.size() != 0){
                str += q.peek();
            }else{
                str += "#";
            }
        }
        return str;
    }
}