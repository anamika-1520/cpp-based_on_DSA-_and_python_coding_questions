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
class linked{
private:
    node*start;
public:
    linked(){
      this->start  = NULL;
    }
    void insert(int data){
        node*newnode;
        newnode = new node(data);
        if(start==NULL){
            start = newnode;
        }
        else{
            newnode->link =this->start;
            this->start = newnode;
        }
    }
    int size(){
         node*temp = start;
         int length = 0;
         if(temp==NULL){
            return 0;
         }
         while(temp!=NULL){
            length++;
            temp = temp->link;
         }
         return length;
    }
    int middlepos(){
        int mid = 0;
        int length = size();
        if(length%2==0){
            mid = (length/2)+1;
        }
        else{
            mid = length/2;
        }
        return mid;
    }
    int midelement(){
        int midposition = middlepos();
        int pos = 1;
        node*temp = start;
        while(pos!=midposition){
            temp = temp->link;
            pos++;
        }
        return temp->data;
    }
    void print(){
        if(start==NULL){
            cout<<"Empty list"<<endl;
            return; 
        }
        node*temp = start;
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp =temp->link;
        }
    }
};
int main(){
    linked list;
    list.print();
    list.insert(73);
    list.insert(53);
    list.insert(35);
    list.insert(68);
    list.insert(29);
    list.insert(92);
    list.print();
    cout<<"\nLength of the linked list is : "<<list.size()<<endl;
    cout<<"\nmiddle position is the list is : "<<list.middlepos()<<endl;
    cout<<"\nmiddle element is the list is : "<<list.midelement()<<endl;
}