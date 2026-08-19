#include <iostream>
#include <algorithm>

struct Node{
    int key;
    Node* left;
    Node* right;
    int height;
};

Node* createNode(int key);
int getHeight(Node* node);
int getBalanceFactor(Node* node);

int main(){

    return 0;
}

Node* createNode(int key){
    Node* newNode = new Node();
    newNode->key = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->height = 1;
    return newNode;
}

int getHeight(Node* node){
    return (node == nullptr) ? 0 : node->height;
}

int getBalanceFactor(Node* node){
    return (node == nullptr) ? 0 : getHeight(node->left) - getHeight(node->right);
}