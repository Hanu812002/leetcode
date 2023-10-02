class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0;
        int b=0;
        
        if(colors.length()<3)
            return false;
        
        int x=0;
        int y=0;
        
        for(int i=0;i<colors.length();i++){
        
            if(colors[i]=='A'){
                x++;
                if(y>=3){
                    b+=(y-2);
                }
                y=0;
            }
            else{
                y++;
                
                if(x>=3){
                    a+=(x-2);
                }
                x=0;
            }
        }
        
                if(y>=3){
                    b+=(y-2);
                    y=0;
                }
                
                if(x>=3){
                    a+=(x-2);
                    x=0;
                }
        // cout<<a<<" "<<b<<endl;
        return a>b;
        
    }
};