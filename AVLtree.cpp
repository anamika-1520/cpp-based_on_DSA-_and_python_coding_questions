#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node*lchild;
       node*rchild;
       int height ;
       node(int data){
        this->data=data;
        this->lchild=NULL;
        this->rchild=NULL;
        this->height=1;
    }


};
int height(node *N) { 
    if (N == nullptr) 
        return 0; 
    return N->height; 
} 
int h(node*root){
    if(root==NULL){
        return 0;
    }
    int ldepth=h(root->lchild);
    int rdepth=h(root->rchild);
    return ldepth>rdepth ? (ldepth+1) : (rdepth+1);
}
/*node*insert(node*root,int d){
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
}*/
int getbalancedfactor(node*root){
    if(root==NULL){
        return 0;
    }
    return (height(root->lchild)-height(root->rchild));
    
}

node* rightrotate(node*y){
    node*x=y->lchild;
    node*t2=x->rchild;
    x->rchild=y;
    y->lchild=t2;
    x->height=max(height(x->lchild),height(x->rchild))+1;
    y->height=max(height(x->lchild),height(x->rchild))+1;
    return x;

}
node* leftrotate(node*x){
    node*y=x->rchild;
    node*t2=y->lchild;
    y->lchild=x;
    x->rchild=t2;
    x->height=max(height(x->lchild),height(x->rchild))+1;
    y->height=max(height(x->lchild),height(x->rchild))+1;
    return y;

}
node*insert(node*root,int data){
      if(root==NULL){
        
        return new node(data);
      }
      if(data<root->data){
         root->lchild=insert(root->lchild,data);
         //cout<<"hattt"<<endl;
      }
      else if(data>root->data){
        root->rchild=insert(root->rchild,data);
        //cout<<"sweet"<<endl;
      
      //return root;
      }
      else {
        return root;
      }
      root->height=1+max(height(root->lchild),height(root->rchild));
      int bf=getbalancedfactor(root);
      // LEFT - LEFT CASE
      if(bf>1 && data<root->lchild->data){
        cout<<"left case"<<endl;
          return rightrotate(root);
      }
      // RIGHT RIGHT CASE
     if (bf<-1 && data>root->rchild->data){
        cout<<"right case "<<endl;
         return leftrotate(root);
      }
      /// left - right case 
      if(bf>1 && data>root->lchild->data)
      {
        root->lchild= leftrotate(root->lchild);
        cout<<"left right case "<<endl;
        return rightrotate(root);

      }
       if(bf<-1 && data<root->rchild->data)
      {
        root->rchild= leftrotate(root->rchild);
        cout<<"right left case"<<endl;
        return rightrotate(root);


      }
      return root;
}
/*void inorder(node*root){
    node*temp1=root;
    if(temp1!=NULL){
        inorder(temp1->lchild);
        cout<<temp1->data<<" ";
        inorder(temp1->rchild);
    }

    
}*/
/*void postorder(node*root){
    node*temp1=root;
    if(temp1!=NULL){
        postorder(temp1->lchild);
        postorder(temp1->rchild);
        cout<<temp1->data<<" ";
    }


    
}*/
void preorder(node*root){
    node*temp2=root;
    if(temp2!=NULL){
        cout<<temp2->data<<" ";
        preorder(temp2->lchild);
        preorder(temp2->rchild);
        
    }
}


/*void printvalue(node*root,int level){
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
     int h=height(root);
     for(int i=1;i<=h;i++){
        printvalue(root,i);
     }
}*/

int main(){
    node*root;
    root=NULL;
     root = insert(root, 10); 
    root = insert(root, 20); 
    root = insert(root, 30); 
    root = insert(root, 40); 
    root = insert(root, 50); 
    root = insert(root, 25); 
    
    //root=insert(root,40);
    //root=insert(root,20);
    //root=insert(root,60);
    //root=insert(root,10);
    //root=insert(root,30);
    //root=insert(root,33);
    //root=insert(root,22);
   // root=insert(root,39);
    //cout<<endl<<"the inorder traversal of the BST is :";
    //inorder(root);
    //cout<<endl<<"the postorder traversal of the BST is :";
    //postorder(root);
    cout<<endl<<"the preorder traversal of the BST is :";
    preorder(root);
    //cout<<endl<<"the level order traversal of the BST is :";
    //levelorder(root);
    //cout<<endl<<"the height of the tree is : "<<height(root)<<endl;

}
       
       
