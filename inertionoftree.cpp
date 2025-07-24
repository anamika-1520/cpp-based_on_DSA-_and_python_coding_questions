#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node*lchild;
       node*rchild;
       node(int data){
        this->data=data;
        this->lchild=NULL;
        this->rchild=NULL;
    }


};
node*insert(node*root,int d){
       node*temp=root;
       temp=new node(d);
       if(root==NULL){
          return temp;
       }
       node*curr;
       node*parent;
       curr=root;
       while(curr!=NULL){
        parent=curr;
        if(d>curr->data){
          curr=curr->rchild;}
        else if(d<(curr->data)){
        curr=curr->lchild;

       }
       else{
          return root;
       }
    } 
    if(parent->data>d){
        parent->lchild=temp;
    }
    else{
        parent->rchild=temp;
    }
    return root;
}
void inorder(node*root){
    node*temp1=root;
    if(temp1!=NULL){
        inorder(temp1->lchild);
        cout<<temp1->data<<" ";
        inorder(temp1->rchild);
    }

    
}
node* swap(node*root){
    node*temp1=root;
    if(root==NULL){
        return root;
    }
        swap(temp1->lchild);
        swap(temp1->rchild);
        //cout<<temp1->data<<" ";
    
    node*temp=temp1->lchild;
    temp1->lchild=root->rchild;
    temp1->rchild=temp;


    
}
void inverse(node*root){
    swap(root);
}
int main(){
    node*root;
    root=NULL;
    root=insert(root,40);
    root=insert(root,20);
    root=insert(root,60);
    root=insert(root,10);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,45);
    root=insert(root,78);
    root=insert(root,34);
    root=insert(root,49);
    root=insert(root,33);
    root=insert(root,22);
    root=insert(root,39);
    cout<<endl<<"the inorder traversal of the BST is :";
    inorder(root);
    inverse(root);
    cout<<endl<<"the invertion  of the BST is :";
    inorder(root);}
