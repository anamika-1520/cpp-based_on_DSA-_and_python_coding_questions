#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;

    Node(){
        this->data=0;
        this->link= NULL;
    }

    Node(int data){
        this->data=data;
        this->link = NULL;
    }
};
class Stack{
    Node*Top;
    public:
    Stack(){
        Top = NULL;
    }

    void Spush(int data){
        Node*newNode;
        newNode = new Node(data);
        if(Top==NULL){
            Top = newNode;
            return;
        }
        newNode->link = this->Top;
        this->Top = newNode;
    }
    void spop(){
        Node*temp=Top;
        if(Top==NULL){
            cout<<"the stack is empty ."<<endl;
        }
        Top=temp->link;
        delete temp;
    }

    void print(){
        Node*temp = Top;
        if(Top==NULL){
            cout<<"Empty Stack"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->link;
        }   
    }
};
int main(){
    Stack s;
    s.print();
    cout<<"pushing thw elements in stack :"<<endl;
    s.Spush(10);
    s.Spush(20);
    s.Spush(30);
    s.Spush(40);
    s.Spush(50);
    s.Spush(60);
    s.Spush(70);
    s.Spush(80);
    s.Spush(90);
    s.print();
    s.spop();
    cout<<"\nafter popping the element from stack :"<<endl;
    s.print();
}