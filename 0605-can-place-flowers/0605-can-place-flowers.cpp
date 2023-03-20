class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int flower=0;
        int z=0;
        int i=0;
        while(i<flowerbed.size() && flowerbed[i]==0)
        {    z++;
           i++;
        }
        if(i==flowerbed.size()){
        
            if(z%2==0)
            flower+=(z/2);
            else
            flower+=(z/2 +1);
        }
        else{
            flower+=(z/2);  
        }
        
        z=0;
        for(;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                if(z==3)
                flower+=1;
                else if(z>3){
                    
                    if(z%2==0)
                        flower+=(z/2 -1);
                    else
                        flower+=(z/2);
                    
                    // cout<<z<<" "<<z/2<<endl;
                }
                z=0;
            }
            else
                z++;
        }
        
        if(flowerbed[flowerbed.size()-1]!=1)
            flower+=(z/2);
        
                // cout<<flower<<endl;

        return flower>=n;
    }
};