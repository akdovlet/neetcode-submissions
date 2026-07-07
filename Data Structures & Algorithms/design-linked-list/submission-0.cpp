class MyLinkedList
{
private:
    struct Node
    {
        int             val;
        struct Node    *next;
        struct Node    *prev;
    };
    struct Node *head;
    struct Node *tail;
    int         size;
public:
    MyLinkedList() : size(0), head(nullptr), tail(nullptr)
    {
    }
    
    int get(int index) 
    {
        if (!size)
            return (-1);
        if (index < 0 || index >= size)
            return (-1);
        if (index == 0)
            return (head->val);
        if (index == size - 1)
            return (tail->val);

        int i = 0;
        Node    *curr = head;
        while (curr)
        {
            if (index == i)
                return curr->val;
            curr = curr->next;
            i++;
        }
        return (-1);
    }
    
    void addAtHead(int val) 
    {
        Node    *newNode = new Node;
        newNode->val = val;
        size++;
        if (!head && !tail)
        {
            head = newNode;
            newNode->next = nullptr;
            newNode->prev = nullptr;
            tail = newNode;
            return ;
        }
        newNode->next = head;
        newNode->prev = nullptr;
        head->prev = newNode;
        head = newNode;
    }
    
    void addAtTail(int val) 
    {
        Node    *newNode = new Node;
        newNode->val = val;
        size++;
        if (!tail && !head)
        {
            head = newNode;
            newNode->next = nullptr;
            newNode->prev = nullptr;
            tail = newNode;
            return ;
        }
        newNode->next = nullptr;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    
    void addAtIndex(int index, int val) 
    {
        if (index < 0 || index > size)
            return ;
        if (!index)
            return (addAtHead(val));
        if (index == size)
            return (addAtTail(val));
        Node    *newNode = new Node;
        newNode->val = val;
        Node    *curr = (index > (size / 2)) ? tail : head;
        if (curr == tail)
        {
            int i = size - 1;
            while (curr)
            {
                if (i == index)
                {
                    Node *tmp = curr->prev;
                    tmp->next = newNode;
                    newNode->prev = tmp;
                    newNode->next = curr;
                    curr->prev = newNode;
                    size++;
                    return;
                }
                curr = curr->prev;
                i--;
            }
        }
        
        else if (curr == head)
        { 
            int i = 0;
            while (curr)
            {
                if (i == index)
                {
                    Node *tmp = curr->prev;
                    tmp->next = newNode;
                    newNode->prev = tmp;
                    newNode->next = curr;
                    curr->prev = newNode;
                    size++;
                    return;
                }
                curr = curr->next;
                i++;
            }
        }
    }
    
    void    deleteTail(void)
    {
        if (!tail)
            return ;
        if (head == tail) {
            delete tail;
            head = tail = nullptr;
        } else {
            Node *tmp = tail->prev;
            tmp->next = nullptr;
            delete tail;
            tail = tmp;
        }
        size--;
    }

    void    deleteHead(void)
    {
        if (!head)
            return ;
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            size--;
            return ;
        }
        Node    *tmp = head->next;
        delete head;
        head = tmp;
        head->prev = nullptr;
        size--;
    }

    void deleteAtIndex(int index) 
    {
        if (index < 0 || index >= size)
            return ;
        if (!index)
            return (deleteHead());
        if (index == size - 1)
            return (deleteTail());

        Node    *curr = (index > (size / 2)) ? tail : head;
        if (curr == tail)
        {
            int i = size - 1;
            while (curr)
            {
                if (i == index)
                {
                    Node *p = curr->prev;
                    Node *n = curr->next;
                    p->next = n;
                    n->prev = p;
                    delete curr;

                    size--;
                    return;
                }
                curr = curr->prev;
                i--;
            }
        }
        else if (curr == head)
        {
            int i = 0;
            while (curr)
            {
                if (i == index)
                {
                    Node *p = curr->prev;
                    Node *n = curr->next;
                    p->next = n;
                    n->prev = p;
                    delete curr;

                    size--;
                    return;
                }
                curr = curr->next;
                i++;
            }
        }
    }
};