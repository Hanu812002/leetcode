class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n=target.size();
       
        // long long a=n;
        // while(1){
        //     if(a==s)
        //         return true;
        //     else if(a>s)
        //         return false;
        //     a+=n-1;
        //     n=a;
        // }
        priority_queue<int>pq;
        long long s=0;
        for(int i=0;i<n;i++){
            s+=target[i];
            pq.push(target[i]);
        } 
        while(pq.top()!=1){
            
            s-=pq.top();
            if(s==0 || s>=pq.top())
                return false;
            int old=pq.top()%s;
            
            if(s!=1 && old==0)
                return false;
            pq.pop();
            pq.push(old);
            s+=old;
        }
        return true;
    }
};