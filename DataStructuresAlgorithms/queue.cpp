#include <iostream>

struct Node{
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

bool isEmpty(){
    return front == nullptr;
}

void enqueue(int value);
void dequeue();
void display();

int main(){
    enqueue(3);
    enqueue(5);
    enqueue(9);

    display();

    dequeue();
    dequeue();

    display();
    dequeue();
    
    return 0;
}

void enqueue(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if(isEmpty()){
        front = newNode;
        rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
    std::cout << value << " enqueue.\n";
}

void dequeue(){
    if(isEmpty()){
        std::cout << "Empty queue.\n";
        return;
    }

    Node* temp = front;
    std::cout << temp->data << " dequeue from queue.\n";

    front = front->next;

    if(front == nullptr){
        rear = nullptr;
    }

    delete temp;
}

void display(){
    if(isEmpty()){
        std::cout << "Queue is empty.\n";
        return;
    }

    Node* current = front;
    std::cout << "Queue elements: "<< std::endl;

    while (current != nullptr){
        std::cout << current->data << std::endl;
        current= current->next;
    }
}