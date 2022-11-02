//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int k = Integer.parseInt(inputLine[1]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().removals(arr, n, k);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    int [][]dp=new int[101][101];
    int fun(int []arr,int n,int m,int k){
        if(arr[n]-arr[m]<=k)
        return 0;
        
        if(dp[n][m]!=-1)
        return dp[n][m];
        
        int f=fun(arr,n,m+1,k);
        int s=fun(arr,n-1,m,k);
        
        return dp[n][m]=1+Math.min(f,s);
    }
    int removals(int[] arr, int n, int k) {
        // code here
        Arrays.sort(arr);
          for (int[] row : dp)
             Arrays.fill(row,-1);
       
        return fun(arr,n-1,0,k);
    }
}