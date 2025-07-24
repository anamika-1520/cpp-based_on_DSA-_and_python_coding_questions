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
void postorder(node*root){
    node*temp1=root;
    if(temp1!=NULL){
        postorder(temp1->lchild);
        postorder(temp1->rchild);
        cout<<temp1->data<<" ";
    }


    
}
void preorder(node*root){
    node*temp2=root;
    if(temp2!=NULL){
        cout<<temp2->data<<" ";
        preorder(temp2->lchild);
        preorder(temp2->rchild);
        
    }
}
int maxdepth(node*root){
    if(root==NULL){
        return 0;
    }
    int ldepth=maxdepth(root->lchild);
    int rdepth=maxdepth(root->rchild);
    return ldepth>rdepth ? (ldepth+1) : (rdepth+1);
}

void printvalue(node*root,int level){
    if(root==NULL){
        return ;
    }
    if(level==1){
        cout<<root->data<<" ";
    }
    else if(level>1){
        printvalue(root->lchild,level-1);
        printvalue(root->rchild,level-1);

    }
}
void levelorder(node*root){
     int h=maxdepth(root);
     for(int i=1;i<=h;i++){
        printvalue(root,i);
     }
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
    cout<<endl<<"the postorder traversal of the BST is :";
    postorder(root);
    cout<<endl<<"the preorder traversal of the BST is :";
    preorder(root);
    cout<<endl<<"the level order traversal of the BST is :";
    levelorder(root);
    cout<<endl<<"the height of the tree is : "<<maxdepth(root)<<endl;

}
       
       
