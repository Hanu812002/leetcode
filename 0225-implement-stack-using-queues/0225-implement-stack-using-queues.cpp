class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    int peek=-1;
    void push(int x) {
        peek=x;
        q1.push(x);
    }
    
    int pop() {
        
        int n=q1.size();
        n-=1;
        while(n--){
            peek=q1.front();
            q1.push(peek);
            q1.pop();
        }
        
        int x=q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return peek;
    }
    
    bool empty() {
       return q1.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */