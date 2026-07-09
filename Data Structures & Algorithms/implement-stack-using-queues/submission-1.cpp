class MyStack 
{
private:
    struct Node
    {
        int     val;
        Node    *next;
    };
    Node    *head;
public:
    MyStack() : head(nullptr)
    {
        
    }
    
    void push(int x) 
    {
        Node    *newNode = new Node;
        newNode->val = x;
        newNode->next = head;
        head = newNode;
    }
    
    int pop() 
    {
        if (!head)
            return (-1);
        int value = head->val;
        Node    *tmp = head->next;
        delete head;
        head = tmp;
        return (value);
    }
    
    int top() 
    {
        return (head->val);
    }
    
    bool empty() 
    {
        return (!head);
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