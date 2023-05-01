class Solution {
public:
    double average(vector<int>& salary) {
       // map<int,int>m;
        int x=*max_element(salary.begin(),salary.end());
        int y=*min_element(salary.begin(),salary.end());
        double d=0;
        for(int i=0;i<salary.size();i++){
            if(x!=salary[i]&&y!=salary[i])
                d+=salary[i];
        }
        return d/(salary.size()-2);
    }
};