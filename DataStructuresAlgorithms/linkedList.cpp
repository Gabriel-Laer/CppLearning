#include <iostream>

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};


void addNode(Node*& head, int value);
void printList(Node* head);
void freeList(Node*& head);

int main(){
    Node* head = nullptr;
    
    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 3);
    addNode(head, 4);

    printList(head);
    freeList(head);

    return 0;
}

void addNode(Node*& head, int value){
    Node* newNode = new Node(value);
    Node* temp = head;

    if(head == nullptr){
        head = newNode;
        return;
    }

    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

void freeList(Node*& head){
    Node* current = head;
    Node* nextNode = nullptr;
    while(current != nullptr){
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}