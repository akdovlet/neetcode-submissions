class MinStack{
private: 
    stack<int>  st;
    stack<int>  lowValues;
    int         min;
public:
    MinStack() : min(INT_MAX){
    }
    
    void push(int val) {
        st.push(val);
        if (val <= min)
        {
            min = val;
            lowValues.push(min);
        }
    }
    
    void pop() {
        if (st.empty())
            return ;
        int value = st.top();
        st.pop();
        if (value == min)
        {
            lowValues.pop();
            if (lowValues.empty())
                min = INT_MAX;
            else
                min = lowValues.top();
        }
    }
    
    int top() {
        return (st.top());
    }
    
    int getMin() {
        return (min);
    }
};
