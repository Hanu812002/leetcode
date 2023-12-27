class Solution {
    public int minCost(String colors, int[] neededTime) {
        int i=0;
        int j=0;
        int ans=0;
        while(i<colors.length() && j<colors.length()){
            int m=0;
            int grptotl=0;
            while(j<colors.length() && colors.charAt(i)==colors.charAt(j)){
                grptotl+=neededTime[j];
                m=Math.max(m,neededTime[j]);
                j++;
            }
            ans+=(grptotl-m);
            i=j;
        }
        return ans;
    }
}