class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s=0;
        int sum=0;
        int cnt=0;
        int n=gas.size();
        for(int i=0;i<2*n;i++){
            sum+=(gas[i%n]-cost[i%n]);
            if(sum<0){
                s=i+1;
                sum=0;
                cnt=0;
            }
            else{
                cnt++;
                if(cnt==n)
                 return s;
            }
        }
        return -1;
    }
};