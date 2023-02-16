class MyStack {
public:
    MyStack() {

    }
    queue<int> que;
    void push(int x) {
        que.push(x);
    }
    
    int pop() {
        for(int i=0;i<que.size()-1;++i)
        {
            que.push(que.front());
            que.pop();
        }
        int ret=que.front();
        que.pop();
        return ret;
    }
    
    int top() {
        return que.back();
    }
    
    bool empty() {
        return que.empty();
    }
};

