#include<iostream>
using namespace std;
class node{
       public:
       int data;
       node* link;
       node(int d){
        this->data=d;
        this->link=NULL;
       }
};
node* insertatbeg(node*start,int d){
        node* newnode=new node(d);
        if(start==NULL){
            start= newnode;
            return start;
        }
        else{
            newnode->link=start;
            start=newnode;
        }
        return start;
    }
    
//};
    node* mergesort(node* list1,node* list2){
        node* bekarnode=new node(-1);
        node*temp=bekarnode;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<=list2->data){
                temp->link=list1;
                list1=list1->link;
        }
        else{
            temp->link=list2;
            list2=list2->link;
        }
        temp=temp->link;
    }
    
    if(list1!=NULL){
        temp->link=list1;

    }
    else{
        temp->link=list2;
    }
    return bekarnode->link;
}   
node*findmiddle(node*start){
    node*slow=start;
    node*fast=start->link;
    if(start==NULL && start->link==NULL){
        return start;

    }
    while(fast!=NULL && fast->link!= NULL){
        slow=slow->link;
        fast=fast->link->link;
    }
    return slow;
}
node*sortll(node*start){
    if(start==NULL || start->link==NULL){
        return start;

    }
    node*middle=findmiddle(start);
    node*right=middle->link;
    middle->link=NULL;
    node*left=start;
    return mergesort(left,right);
}
   void print(node*start){
        node* temp=start;
        if(temp==nullptr){
            cout<<"the list is empty ."<<endl;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    } 


    
 
    
    

int main(){
    node*start=NULL;
    start=insertatbeg(start,12);
    start=insertatbeg(start,90);
    start=insertatbeg(start,123);
    start=insertatbeg(start,67);
    start=insertatbeg(start,34);
    start=insertatbeg(start,45);
    start=insertatbeg(start,89);
    print(start);
    sortll(start);
    print(start);
    return 0;
    

}
