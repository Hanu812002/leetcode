class Solution {
    int[][]arr;
    int ni;
    public int maximumScore(int[] nums, int[] mul) {
             arr=new int[1001][1001];
        ni=mul.length;
             return help(0,0,nums.length-1,nums,mul);
            
        

    }
    private int help(int i,int j,int s,int[] n,int[] m){
        if(j==ni)
            return 0;
        if(arr[i][j]!=0)
            return arr[i][j];
       int l=m[j]*n[i] + help(i+1,j+1,s,n,m);
        int r=m[j]*n[s-(j-i)]+help(i,j+1,s,n,m);
        return arr[i][j]=Math.max(r,l);
    }
}