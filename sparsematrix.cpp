//*SPARSE MATRIX USING LINKED LIST***
#include<iostream>
using namespace std;
class node{
public:
    int Row;
    int Column;
    int data;
    node*link;
    node(int Row, int Column, int data){
        this->Row = Row;
        this->Column = Column;
        this->data = data;
        this->link = NULL;
    }
};
class compactM{
   private:
   node*start;
   public:
   compactM(){
      start = NULL;
   }
   void CompactInsert(int i,int j,int data){
      node*newnode;
      newnode = new node(i,j,data);

      if(start==NULL){
         start = newnode;
         return;
      }
      node*temp;
      temp = start;
      while(temp->link!=NULL){
        temp=temp->link;
      }
      temp->link = newnode;
   }
   void print(){
      node*temp1;
      temp1=start;
      if(start==NULL){
        cout<<"Empty list";
        return;
      }
      while(temp1!=NULL){
        cout<<"row is : "<<temp1->Row<<" , "<<"column is : "<<temp1->Column<<" , "<<"the value is : "<<temp1->data<<endl;
        temp1 = temp1->link;
      }
   }
};
int main(){
    compactM c;
    int A[4][5] = {{0,0,3,0,4},{0,0,5,0,7},{0,0,0,0,0},{0,2,6,0,0}};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(A[i][j]!=0){
                c.CompactInsert(i,j,A[i][j]);
            }
        }
    }
    c.print();
}