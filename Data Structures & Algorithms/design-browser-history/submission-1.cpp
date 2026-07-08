class BrowserHistory 
{
private:
    struct Node
    {
        string val;
        Node    *next;
        Node    *prev;
    };
    Node    *head;
    Node    *curr;
public:
    BrowserHistory(string homepage) 
    {
        head = new Node;
        head->val = homepage;
        head->next = nullptr;
        head->prev = nullptr;
        curr = head;
    }
    
    void    erase(Node *curr)
    {
        Node    *tmp;

        while (curr)
        {
            tmp = curr->next;
            delete curr;
            curr = tmp;
        }
    }

    void visit(string url) 
    {
        Node    *newNode = new Node;
        newNode->val = url;
        newNode->prev = curr;
        newNode->next = nullptr;
        erase(curr->next);
        curr->next = newNode;
        curr = newNode;
    }
    
    string back(int steps) 
    {
        while (curr->prev && steps)
        {
            curr = curr->prev;
            steps--;
        }
        return (curr->val);
    }
    
    string forward(int steps) 
    {
        while (curr->next && steps)
        {
            curr = curr->next;
            steps--;
        }
        return (curr->val);
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */