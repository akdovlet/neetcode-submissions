class BrowserHistory 
{
private:
    string          home;
    vector<string>  history;
    int             index;
public:
    BrowserHistory(string homepage) : home(homepage), index(0)
    {
        history.push_back(homepage);
    }
    
    void visit(string url) 
    {
        history.erase(history.begin() + index + 1, history.end());
        history.push_back(url);
        index = history.size() - 1;
    }
    
    string back(int steps) 
    {
        index -= steps;
        if (index < 0)
            index = 0;
        return (history[index]);
    }
    
    string forward(int steps) 
    {
        index += steps;
        if (index >= history.size())
            index = history.size() - 1;
        return (history[index]);
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */