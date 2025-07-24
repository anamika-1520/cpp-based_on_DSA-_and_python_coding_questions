#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node*prev;
       node*tail;
       node(int data){
        this->data=data;
        this->prev=NULL;
        this->tail=NULL;
       }

};
class DLL{
    node*start;
   public:
    DLL(){
        start=NULL;
    }
    void insertatbeg(int data){
        node*newnode=new node(data);
        if(start==NULL){
            start=newnode;
            return ;
        }
        newnode->tail=start;
        newnode->prev=NULL;
        start=newnode;
    }
    void insertatend(int data){
        node*newnode=new node(data);
        if(start==NULL){
            start=newnode;
            return ;
        }
        node*temp=start;
        while(temp->tail!=NULL){
             temp=temp->tail;
        }
        //newnode->prev=temp;
        temp->tail=newnode;
        newnode->prev=temp;



    }
    void insertatanypos(int data,int pos){
        node*newnode=new node(data);
        int cnt=1;
        
        node*temp=start;
        while(cnt<pos-1){
            temp=temp->tail;
            cnt=cnt+1;
        }
        if(cnt==1){
            insertatbeg(data);
            return ;
        }
        else if(temp->tail==NULL){
            insertatend(data);
            return ;
        }
        else{
            temp->tail->prev=newnode;
            newnode->tail=temp->tail;
            temp->tail=newnode;
            newnode->prev=temp;
            
        }
        
        
}
    void deleteatbeg(){
         node*temp=start;
         if(start==NULL){
            cout<<"the list is empty."<<endl;
            return;
         }
         start=temp->tail;
         if(start!=NULL)
            start->prev=NULL;
        delete temp;    
   }
   void deleteatend(){
       node*temp=start;
       if(start==NULL){
        cout<<"the list is empty ."<<endl;
        return ;
       }
       if(start->tail==NULL){
        delete start;
       }
       while(temp->tail!=NULL){
           temp=temp->tail;
       }
       temp->prev->tail=NULL;
       delete temp;
   }
   void deleteatanypos(int pos){
        node*temp=start;
        int cnt=1;
         if(start==NULL){
        cout<<"the list is empty ."<<endl;
        return ;
       }
       
       while(cnt<pos){
         temp=temp->tail;
         cnt++;
       }
       if(temp==NULL){
        cout<<"the positon is out of range ."<<endl;
        return ;
       }
       if(temp->prev!=NULL){
        temp->prev->tail=temp->tail;
       }
       if(temp->tail!=NULL){
        temp->tail->prev=temp->tail;
       }
       if(start==temp){
        start=temp->tail;
       }
       delete temp;
   }
    void print(){
        node*temp=start;
        if(start==NULL){
            cout<<"the list is empty."<<endl;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->tail;
        }
        cout<<endl;
    }



};
int main(){
    DLL list;int pos;
    list.insertatbeg(89);
    list.insertatbeg(378);
    list.insertatbeg(32);
    list.insertatbeg(34);
    list.insertatend(56);
    list.insertatend(56);
    list.insertatend(56);
    list.insertatend(56);
    list.insertatanypos(45678,4);
    list.insertatanypos(45,6);
    list.insertatanypos(48,7);
    list.insertatanypos(56,3);
    cout<<"the DLL is : "<<endl;
    list.print();
    cout<<"the modified list after deletion at beginning :"<<endl;
    list.deleteatbeg();
    list.print();
    cout<<"the modified list after deletion at end :"<<endl;
    list.deleteatend();
    list.print();
    cout<<"the modified list after deletion at the position  :"<<endl;
    cin>>pos;
    list.deleteatanypos(pos);
    list.print();
    return 0;
}