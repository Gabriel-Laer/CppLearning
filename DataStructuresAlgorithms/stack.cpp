#include <iostream>

struct Node{
    int data;
    Node* next;
};

struct LinkedListStack{
    Node* top = nullptr;

    bool isEmpty(){
        return top== nullptr;
    }
    
    void push(int value){
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    
    void pop(){
        if(isEmpty()){
            std::cout << "Nothing to pop" << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << temp->data << " popped from stacks.\n";
        delete temp;
    }

    int peek(){
        if(isEmpty()){
            std::cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }

    void clear(){
        while (!isEmpty()){
            pop();
        }
    }
};

int main(){
    LinkedListStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element is: " << stack.peek() << std::endl;
    stack.pop();
    std::cout << "Top element is: " << stack.peek() << std::endl;
    stack.clear();
    return 0;
}