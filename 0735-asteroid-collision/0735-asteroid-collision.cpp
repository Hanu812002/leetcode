class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
   stack<int> s;
        for(int i=0; i<asteroids.size(); i++){
            int next = asteroids[i];
            if(asteroids[i]>0){
                s.push(asteroids[i]);
            }
            else if(asteroids[i]<0){
                while(!s.empty() && s.top()*next<0 && next<0){
                    if(abs(s.top())<abs(next)){
                        s.pop();
                    }
                    else if(abs(s.top())>abs(next)){
                        next = s.top();
                        s.pop();
                    }
                    else if(!s.empty() && s.top()+next==0 && next<0){
                        s.pop();
                        next = 0;
                    }
                }
                if(next != 0) s.push(next);
            }
        }
        int n = s.size();
        vector<int> res(n);
        for(int i=n-1; i>=0; i--){
            res[i]=s.top();
            s.pop();
        }
        return res;
    
        
    }
};