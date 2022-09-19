class Solution {
    public int characterReplacement(String s, int k) {
        HashMap<Character,Integer>h=new HashMap();
        int m=0;
        int i=0;
        int j=0;
        
        while(i<s.length()){
            h.put(s.charAt(i),h.getOrDefault(s.charAt(i),0)+1);
            
            while(i-j+1 - fun(h) > k){
          h.put(s.charAt(j),h.get(s.charAt(j))-1);
                if(h.get(s.charAt(j))==0)
                    h.remove(s.charAt(j));
                j++;

            }
            m=Math.max(m,i-j+1);
            i++;
        }
        return m;
    }
     public int fun(HashMap<Character,Integer> hashMap)
    {
        int max = 0;
        for (var value : hashMap.values()) {
            max = Math.max(max,value);
        }
        return max;
    }
}