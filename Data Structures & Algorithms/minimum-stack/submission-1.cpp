class MinStack {
    std::vector<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push_back(val);
        cout << "Current stack\n";
        for (int i : minstack) {
            cout << i << '\n';
        }
    }
    
    void pop() {
        minstack.pop_back();
    }
    
    int top() {
        return minstack[minstack.size() -1];
    }
    
    int getMin() {
        int smallest = INT_MAX;
        for (int i: minstack) {
            if ( i < smallest) smallest = i;
        }
        return smallest;
    }
};
