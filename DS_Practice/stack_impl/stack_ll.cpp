#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Stack{
    Node* top;
    int count;
public:
    Stack(){
        top = nullptr;
        count = 0;
    }

    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;

        count++;
    }

    int pop(){
        if (top == nullptr){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* node = top;
        top = top->next;
        int val = node->data;

        count--;
        delete node;
        return val;
    }

    int peek(){
        if (top == nullptr){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == nullptr;
    }

    int size(){
        return count;
    }

};

int main(){
    Stack st = Stack();

    st.push(10);
    st.push(20);
    cout << st.peek() << endl;
    
    st.push(30);
    cout << st.pop() << endl;

    cout << boolalpha << st.isEmpty() << endl;

    cout << st.size() << endl;
    return 0;
}