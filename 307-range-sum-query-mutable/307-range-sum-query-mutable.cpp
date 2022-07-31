class NumArray {
public:
    int sum=0;
    vector<int>v;
    NumArray(vector<int>& nums) {
       v=nums;
        sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
       sum=sum+val-v[index];
        v[index]=val;
        
    }
    //1 2 3 4 5 6 
    //1 3 6 10 15 21
    int sumRange(int left, int right) {
       int s=sum;
    for(int i=0;i<left;i++)
        s-=v[i];
    for(int i=right+1;i<v.size();i++)
        s-=v[i];
        
        return s;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */