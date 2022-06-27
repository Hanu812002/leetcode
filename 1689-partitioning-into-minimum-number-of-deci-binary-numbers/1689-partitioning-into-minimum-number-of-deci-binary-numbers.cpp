class Solution {
public:
    int minPartitions(string n) {
       int s=0;
        for(int i=0;i<n.length();i++)
        {  
            int a=int(n[i]); 
            s=max(s,a);
        }
    return s-48;
    }
    
    
};