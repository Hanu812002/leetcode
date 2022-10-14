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
            String[] S = br.readLine().trim().split(" ");
            int V = Integer.parseInt(S[0]);
            int E = Integer.parseInt(S[1]);
            ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
            for(int i = 0; i < V; i++){
                adj.add(new ArrayList<Integer>());
            }
            for(int i = 0; i < E; i++){
                String[] s = br.readLine().trim().split(" ");
                int u = Integer.parseInt(s[0]);
                int v = Integer.parseInt(s[1]);
                adj.get(u).add(v);
                adj.get(v).add(u);
            }
            Solution obj = new Solution();
            boolean ans = obj.isBipartite(V, adj);
            if(ans)
                System.out.println("1");
            else System.out.println("0");
       }
    }
}
// } Driver Code Ends


class Solution
{
    private boolean dfs(ArrayList<ArrayList<Integer>>a,int color,int c[],int n){
        c[n]=color;
        for(int i : a.get(n)){
            if(c[i]==-1){
            if(dfs(a,1-color,c,i)==false)
            return false;
            }
            else if(c[i]==color)
            return false;
            
            
        }
        return true;
    }
    public boolean isBipartite(int V, ArrayList<ArrayList<Integer>>adj)
    {
       int c[]=new int[V];
       for(int i=0;i<V;i++)
        c[i]=-1;
        
        for(int i=0;i<V;i++){
            if(c[i]==-1){
                if((dfs(adj,0,c,i)==false))
                return false;
            }
        }
        return true;
    }
}