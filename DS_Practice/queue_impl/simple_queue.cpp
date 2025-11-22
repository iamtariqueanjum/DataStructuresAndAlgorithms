#include<iostream>
using namespace std;


class Queue{
    int* arr;
    int capacity;
    int size;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }

    void enqueue(int val){
        if (size == capacity){
            cout << "Queue is full" << endl;
            return;
        }
        arr[size++] = val;
    }

    void dequeue(){
        if (size == 0){
            cout << "Queue underflow" << endl;
            return;
        }
        for(int i = 1; i < size; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }
    
    int getFront(){
        if (size == 0){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[0];
    }

    int getRear(){
        if (size == 0){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[size-1];
    }

    bool isEmpty(){
        return size == 0;
    }

    bool isFull(){
        return size == capacity;
    }

};

int main(){
    Queue q = Queue(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;
    cout << "Rear element after dequeue: " << q.getRear() << endl;
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.enqueue(70);
    q.enqueue(80);
    q.dequeue();
    q.enqueue(80);
    cout << "Queue empty: " << boolalpha << q.isEmpty() << endl;
    cout << "Queue full: " << boolalpha <<  q.isFull() << endl;

    return 0;
}

