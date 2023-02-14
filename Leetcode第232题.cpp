class MyQueue {
public:
    stack<int> in;
    stack<int> out;
    MyQueue() {

    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(out.size()==0){
            while(in.size()!=0)
            {
                out.push(in.top());
                in.pop();
            }
        }
        int head=out.top();
        out.pop();
        return head;
    }
    
    int peek() {
        int res=this->pop();
        out.push(res);
        return res;
    }
    
    bool empty() {
        return in.empty()&&out.empty();
    }
};

