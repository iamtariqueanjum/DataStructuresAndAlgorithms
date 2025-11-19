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

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // traversal
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    
    // insertion at beginning
    Node* newHead = new Node(4);
    newHead->next = new Node(6);
    newHead->next->next = new Node(8);
    
    Node* updated_head = new Node(2);
    updated_head->next = newHead;

    while(updated_head != nullptr){
        cout << updated_head->data << " ";
        updated_head = updated_head->next;
    }
    cout << endl;

    // insertion at end
    Node* headNode = new Node(2);
    Node* tempNode = headNode;
    headNode->next = new Node(4);
    headNode->next->next = new Node(6);
    
    Node* node = new Node(8);
    while(headNode->next != nullptr){
        headNode = headNode->next;
    }
    headNode->next = node;
    while(tempNode != nullptr){
        cout << tempNode->data << " ";
        tempNode= tempNode->next;
    }
    cout << endl;

    // insertion at position
    Node* headNode2 = new Node(10);
    headNode2->next = new Node(20);
    headNode2->next->next = new Node(40);
    
    Node* newNode = new Node(30);
    int pos = 3;

    Node* temp = headNode2;
    for(int i = 1; i < pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    while(headNode2 != nullptr){
        cout << headNode2->data << " ";
        headNode2 = headNode2->next;
    }
    cout << endl;

    // Deletion
    Node* node2 = new Node(10);
    node2->next = new Node(20);
    node2->next->next = new Node(30);
    node2->next->next->next = new Node(40);

    // Deletion from beginning
    Node* temp2 = node2;
    node2 = node2->next;
    delete temp2;

    while(node2 != nullptr){
        cout << node2->data << " ";
        node2 = node2->next;
    }
    cout << endl;

    // Deletion from end
    Node* node3 = new Node(10);
    node3->next = new Node(20);
    node3->next->next = new Node(30);
    node3->next->next->next = new Node(40);

    if (node3->next == nullptr){
        delete node3; // only 1 node return nullptr
    } 
    Node* temp3 = node3;
    while(temp3->next->next != nullptr){
        temp3 = temp3->next;
    }
    Node* temp4 = temp3->next;
    temp3->next = nullptr;
    delete temp4;
    
    while(node3 != nullptr){
        cout << node3->data << " ";
        node3 = node3->next;
    }
    cout << endl;

    // Deletion from position
    int posi = 3;
    Node* currHead = new Node(1);
    Node* currHeadTemp = currHead;
    currHead->next = new Node(2);
    currHead->next->next = new Node(3);
    currHead->next->next->next =new Node(4);

    Node* prev = nullptr;
    for(int i = 1; i < posi; i++){
        prev = currHead;
        currHead = currHead->next;
    }
    prev->next = currHead->next;
    delete currHead;
    
    while(currHeadTemp != nullptr){
        cout << currHeadTemp->data << " ";
        currHeadTemp = currHeadTemp->next;
    }
    cout << endl;
    return 0;
}