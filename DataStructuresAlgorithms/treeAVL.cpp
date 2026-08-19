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
Node* rightRotate(Node* y);
Node* leftRotate(Node* x);
Node* insert(Node* node, int key);
void inOrder(Node* root);
void freeTree(Node* root);

int main(){
    Node* root = nullptr;
    
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 10);
    root = insert(root, 25);
    inOrder(root);
    std::cout << std::endl;
    freeTree(root);
    root = nullptr;
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

Node* rightRotate(Node* y){
    Node* x = y->left;
    Node* tmp = x->right;

    x->right = y;
    y->left = tmp;

    y->height = std::max(getHeight(y->left),getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left),getHeight(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x){
    Node* y = x->right;
    Node* tmp = y->left;

    y->left = x;
    x->right = tmp;

    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    
    return y;
}

Node* insert(Node* node, int key){
    int balance = 0;

    if(node == nullptr){
        return createNode(key);
    }

    if(key < node->key){
        node->left = insert(node->left,key);
    }else if(key > node->key){
        node->right = insert(node->right, key);
    }else{
        return node;
    }

    node->height = 1 + std::max(getHeight(node->left),getHeight(node->right));
    balance = getBalanceFactor(node);

    // caso Left Left
    if(balance > 1 && key < node->left->key){
        return rightRotate(node);
    }

    //caso Right Right
    if(balance < -1 && key > node->right->key){
        return leftRotate(node);
    }

    //caso Left Right
    if(balance > 1 && key > node->left->key){
        node->right = leftRotate(node->right);
        return rightRotate(node);
    }

    //caso Right Left
    if(balance < - 1 && key < node->right->key){
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void inOrder(Node* root){
    if(root != nullptr){
        inOrder(root->left);
        std::cout << root->key << " ";
        inOrder(root->right);
    }
}

void freeTree(Node* root){
    if(root == nullptr) return;

    freeTree(root->left);
    freeTree(root->right);
    delete root;
}