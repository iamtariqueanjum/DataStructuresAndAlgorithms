#include<iostream>
using namespace std;


class Stack{
private:
    int* arr;
    int capacity;
    int top;
public: 
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x){
        if (top == capacity-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    int pop(){
        if (top == -1){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if (top == -1){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == capacity-1;
    }
    int size(){
        if (top == -1) return 0;
        return top+1;
    }
};

int main(){
    Stack st = Stack(5);
    st.push(5);
    st.push(7);
    cout << st.peek() << endl;
    st.push(10);
    cout << st.pop() << endl;
    cout << st.peek() << endl;
    st.push(20);
    st.push(30);
    st.push(21);
    st.push(5); // stack overflow
    cout << "isFull: " << boolalpha << st.isFull() << endl; // true
    st.pop();
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