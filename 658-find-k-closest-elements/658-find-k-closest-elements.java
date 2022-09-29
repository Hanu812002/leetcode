class Solution {
    public List<Integer> findClosestElements(int[] arr, int n, int x) {
        int i=0;
        int min=Math.abs(arr[0]-x);
        for(int k=1;k<arr.length;k++){
            int a=Math.abs(arr[k]-x);
            if(a<min)
            {
                min=a;
                i=k;
            }
        }
        
        int j=i+1;
      
        List<Integer>l=new ArrayList<Integer>();
         l.add(arr[i]);
        i--;
        int c=1;
        while((i>=0 || j<arr.length) && (c<n)){
            c++;
            if(i>=0 && j<arr.length)
            { if(x-arr[i] <= arr[j]-x){
               l.add(arr[i]);
               i--;
             
           }
            else   if(x-arr[i]>arr[j]-x){
               l.add(arr[j]);
               j++;
            
           }
        }

            else if(i==-1)
            {
                l.add(arr[j]);
                j++;
                
            }
            else if(j==arr.length){
                l.add(arr[i]);
                i--;
                
            }
            
        }
        Collections.sort(l);   
        return l;
    }
}