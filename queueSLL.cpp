#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*link;
    node(){
        this->data = 0;
        this->link = NULL;
    }
    node(int data){
        this->data = data;
        this->link = NULL;
    } 
};
class queue{
private:
   node*front;
   node*rear;
public:
      queue(){
        this->front = NULL;
        this->rear = NULL;
      }
      void push(int data){
          node*newnode;
          newnode = new node(data);
          if(front==NULL){  //empty queue
              rear = newnode;
              front = newnode;
              return;
          }
          
           rear->link=newnode;
           rear = newnode;
          
      }
      void pop(){
          if(front==NULL){
            cout<<"Empty Queue"<<endl;
            return;
          }
          node*temp;
          temp = front;
          front = front->link;
          delete temp;
      }
      int peek(){          //peek ---> oldest element
        if(front==NULL){
            cout<<"Empty Queue"<<endl;
            return -1;
        }
        return front->data;
      }
      void isempty(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Queue is not empty"<<endl;
        }
      }
      void print(){
        node*temp = front;
        if(temp==NULL){
           cout<<"Empty Queue"<<endl;
           return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->link;
        }
      }
};
int main(){
    queue q;
    q.push(45);
    q.push(47);
    q.push(37);
    q.push(30);
    q.push(17);
    q.print();
    cout<<"\npeek element is : "<<q.peek()<<endl;
    q.push(83);
    cout<<"After push an element, peek element is : "<<q.peek()<<endl;
    cout<<"after popping :"<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.isempty();
    q.pop();
    cout<<q.peek()<<endl;
    q.isempty();
    return 0;
}