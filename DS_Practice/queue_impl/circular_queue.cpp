#include<iostream>
using namespace std;


class Queue{
    int* arr;
    int front;
    int capacity;
    int size;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        size = 0;
    }
    
    void enqueue(int x) {
        if (size == capacity) {
            cout << "Queue is full!" << endl;
            return;
        }
        int rear = (front + size) % capacity;
        arr[rear] = x;
        size++;
    }

    int dequeue() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int res = arr[front];
        front = (front + 1) % capacity;
        size--;
        return res;
    }

    int getRear() {
        if (size == 0)
            return -1;  
        int rear = (front + size - 1) % capacity;
        return arr[rear];
    }

    int getFront() {
        if (size == 0)
            return -1;
        return arr[front];
    }
};


int main(){
    Queue q = Queue(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(40);
    cout << q.getFront() << " " << q.getRear() << endl;
    return 0;
}