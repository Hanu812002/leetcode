class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j=height.length-1;
        int maxArea=0;
        
        while(i<j)
        {
            int width=j-i;
            int minHeight=Math.min(height[i],height[j]);
            int area= width*minHeight;
            maxArea= Math.max(maxArea,area);
            
            if(minHeight==height[i])
                i++;
            else
                j--;
            
        }
        
        return maxArea;
    
    }
}