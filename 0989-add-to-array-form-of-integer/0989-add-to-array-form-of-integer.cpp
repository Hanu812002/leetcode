class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c=0;
        int i=num.size()-1;
        while(i>=0 && k>0){
            int m=k%10;
            k=k/10;
            int s=(num[i]+m+c)%10;
            c=(num[i]+m+c)/10;
            num[i]=s;
            i--;
        }
        
        while(i>=0){
            int s=(num[i]+c)%10;
            c=(num[i]+c)/10;
            num[i]=s;
            i--;
        }
        
        while(k>0){
            int m=k%10;
            int s=(m+c)%10;
            num.insert(num.begin(),s);
            c=(m+c)/10;
            k=k/10;

        }
        
        if(c==1)
            num.insert(num.begin(),1);
        
        
        return num;
    }
};