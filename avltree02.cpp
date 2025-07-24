// C++ program to insert a node in AVL tree 
#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
    int key; 
    Node *left; 
    Node *right; 
    int height; 

    Node(int k) { 
        key = k; 
        left = nullptr; 
        right = nullptr; 
        height = 1; 
    }
}; 


int height(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return N->height; 
} 


Node *rightRotate(Node *y) { 
    Node *x = y->left; 
    Node *T2 = x->right; 

    
    x->right = y; 
    y->left = T2; 

    y->height = 1 + max(height(y->left), height(y->right)); 
    x->height = 1 + max(height(x->left), height(x->right)); 

    return x; 
} 


Node *leftRotate(Node *x) { 
    Node *y = x->right; 
    Node *T2 = y->left; 

   
    y->left = x; 
    x->right = T2; 


    x->height = 1 + max(height(x->left), height(x->right)); 
    y->height = 1 + max(height(y->left), height(y->right)); 

     
    return y; 
} 


int getBalance(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return height(N->left) - height(N->right); 
} 


Node* insert(Node* node, int key) { 
  
    
    if (node == nullptr) 
        return new Node(key); 

    if (key < node->key) 
        node->left = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
    else 
        return node; 

   
    node->height = 1 + max(height(node->left), height(node->right)); 

    int balance = getBalance(node); 

   

   
    if (balance > 1 && key < node->left->key) 
        return rightRotate(node); 

    if (balance < -1 && key > node->right->key) 
        return leftRotate(node); 

  
    if (balance > 1 && key > node->left->key) { 
        node->left = leftRotate(node->left); 
        return rightRotate(node); 
    } 

   
    if (balance < -1 && key < node->right->key) { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 


    return node; 
} 


void preOrder(Node *root) { 
    if (root != nullptr) { 
        cout << root->key << " "; 
        preOrder(root->left); 
        preOrder(root->right); 
    } 
} 


int main() { 
    Node *root = nullptr; 
    
    
    root = insert(root, 10); 
    root = insert(root, 20); 
    root = insert(root, 30); 
    root = insert(root, 40); 
    root = insert(root, 50); 
    root = insert(root, 25); 
    
   
    cout << "Preorder traversal : \n"; 
    preOrder(root); 
    
    return 0; 
} 
