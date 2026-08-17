#include <iostream>
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value);
Node* insertNode(Node* root, int value);
void printInOrder(Node* root);
void printPreOrder(Node* root);
void printPosOrder(Node* root);
void freeTree(Node* root);
void printTree(Node* root, int level = 0);

int main(){
    Node* root = nullptr;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    std::cout << "In-Order: ";
    printInOrder(root);
    std::cout <<std::endl;

    std::cout << "Pre-Order: ";
    printPreOrder(root);
    std::cout <<std::endl;

    std::cout << "Pos-Order: ";
    printPosOrder(root);
    std::cout <<std::endl;

    std::cout << "Visual Tree: " << std::endl;
    printTree(root, 0);
    freeTree(root);
    root = nullptr;
    return 0;
}

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int value){
    if(root == nullptr){
        return createNode(value);
    }

    if(value < root->data){
        root->left = insertNode(root->left, value);
    }else if(value > root->data){
        root->right = insertNode(root->right, value);
    }
    return root;
}

void printInOrder(Node* root){
    if(root == nullptr) return;

    printInOrder(root->left);
    std::cout<< root->data <<" ";
    printInOrder(root->right);
}

void printPreOrder(Node* root){
    if(root == nullptr) return;
    
    std::cout<< root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPosOrder(Node* root){
    if(root == nullptr) return;

    printPosOrder(root->left);
    printPosOrder(root->right);
    std::cout << root->data << " ";
}

void freeTree(Node* root){
    if(root == nullptr) return;

    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

void printTree(Node* root, int level){
    if(root == nullptr) return;

    printTree(root->right, level + 1);

    for(int i = 0; i < level; i++) std::cout << "     ";

    std::cout << root->data << std::endl;

    printTree(root->left, level + 1);
}