#include<iostream>
using namespace std;
class node{
   public: 
    int data;
    int pre;
    node*link;
    node(){
        this->data=0;
        this->pre=0;
        this->link=NULL;

    }
    node(int data,int pre){
        this->data=data;
        this->pre=pre;
        this->link=NULL;
    }

};
class pqueue{
    node*start;
    public:
     pqueue(){
        start=NULL;
     }
    void push(int data,int pr){
        node*newnode=new node(data,pr);
        if(start==NULL || (start->pre)<pr){
            newnode->link=start;
            start=newnode;
        }
        else{
            node*temp=start;
          //if(temp->link!=NULL)
            while((temp->link!=NULL && temp->link->pre)>pr){
                temp=temp->link;

            }
            newnode->link=temp->link;
            temp->link=newnode;
        
        }
    }
    void pop(){
        node*temp2;
        temp2=start;
        if(start==NULL){
            cout<<"the list is empty. "<<endl;
            return ;
        }
        else{
        
            start=temp2->link;
            delete temp2;
        }
    }
    void print(){
        node*temp1;
        temp1=start;
        if(start==NULL){
            cout<<"the list is empty ."<<endl;
            return ;
        }
        else{
            while(temp1!=NULL){
                cout<<temp1->data<<" ";
                temp1=temp1->link;
            }
            cout<<endl;

        }

    }
    

};
int main(){
    pqueue list;// in priority queue the concept of priority 
    //will be used to enter the elements in sll the high order priority will
    // be entered first and then so one.............
    cout<<"pushing the elements is the linked list ->>>>"<<endl;
    list.push(95,6);
    list.push(83,8);
    list.push(45,3);
    list.push(56,29);
    list.push(84,16);
    list.push(67,12);
    list.push(99,15);

    list.print();

    list.pop();
    cout<<"after the popping the element the list will be : ->>>"<<endl;
    list.print();
    return 0;

}