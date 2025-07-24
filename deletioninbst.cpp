#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
Node* getSuccessor(Node* curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}
Node* delNode(Node* root, int x)
{

    // Base case
    if (root == NULL)
        return root;
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // When both children are present
        Node* succ = getSuccessor(root);
        root->key = succ->key;
        root->right = delNode(root->right, succ->key);
    }
    return root;
}

// Utility function to do inorder
// traversal
void inorder(Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Driver code
int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    int x = 15;
    inorder(root);
    cout<<"\nafter deletion :"<<endl;

    root = delNode(root, x);
    inorder(root);
    return 0;
}
