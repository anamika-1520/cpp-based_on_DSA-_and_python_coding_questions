#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int priority;
    Node*link;
    Node(){
        this->data=0;
        this->priority=0;
        this->link=NULL;
    }
    Node(int data,int priority){
        this->data=data;
        this->priority=priority;
        this->link = NULL;
    }
};
class Pqueue{
private:
    Node*start;
public:
     Pqueue(){
        start = NULL;
     }
     void push(int data,int priority){
        Node*newnode;
        newnode = new Node(data,priority);
        if(start==NULL || (start->priority)<priority){
            newnode->link = start;
            start = newnode;
        }
        else{
            Node*temp;
            temp = start;
            
            while(temp->link!=NULL && (temp->link->priority)>priority){
                   temp = temp->link;
            }
                   newnode->link=temp->link;
                   temp->link = newnode;
        }
     }
 /*    void pop(){
        Node*temp1;
        temp1=start;
        if(temp1==NULL){
            cout<<"The list is empty";
            return;
        }
        else{
            start = temp1->link;
            delete temp1;
        }
     }   */
     void print(){
      Node*temp = start;
      if(temp==NULL){
        cout<<"Empty List";
        return;
      }
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
      }
   }
};
int main(){
     Pqueue l;
     cout<<"Pushing elements in priority queue"<<endl;
     l.push(95,6);
     l.push(83,8);
     l.push(45,3);
     l.push(56,29);
     l.push(84,16);
     l.push(67,12);
     l.print();
}