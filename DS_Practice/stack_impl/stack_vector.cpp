#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> v;
    
    void push(int x){
        v.push_back(x);
    }

    int pop(){
        if(v.empty()){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int val = v.back();
        v.pop_back();
        return val;
    }

    int peek(){
        if(v.empty()){
            cout << "Stack" << endl;
            return -1;
        }
        return v.back();
    }

    bool isEmpty(){
        return v.empty();
    }

    int size(){
        return v.size();
    }
};


int main(){
    Stack st = Stack();
    st.push(5);
    st.push(7);
    cout << st.peek() << endl;
    st.push(10);
    cout << st.pop() << endl;
    cout << st.peek() << endl;
    st.push(20);
    st.push(30);
    st.pop();
    st.pop();
    st.pop();
    cout << "Size: " << st.size() << endl;
    st.pop();
    st.pop(); // stack underflow
    cout << "isEmpty: " << boolalpha << st.isEmpty() << endl; // true
    cout << st.size() << endl;
    return 0;
}