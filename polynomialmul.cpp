#include<iostream>
using namespace std;
class node{
public:
    int cofficient;
    int exponents;
    node*next;
    node(){
        cofficient = 0;
        exponents = 0;
        next = NULL;
    }
    node(int cofficients,int exponents){
        this->cofficient = cofficients;
        this->exponents = exponents;
        this->next = NULL;
    }
};
node* insert(node*head,int cofficient,int exponents){
     node*temp=head;
     node*newp;
    newp = new node(cofficient,exponents);
    if(temp==NULL || temp->exponents<exponents){
        newp->next=head;
        head = newp;
    }else{
      while(temp->next!=NULL && temp->next->exponents>=exponents){
         temp = temp->next;
      }
       newp->next = temp->next;
         temp->next = newp;
    }
    return head;
}
void print(node*head){
   if(head==NULL){
      cout<<"No polynomial";
   }
   else{
      node*temp=head;
      while(temp!=NULL){
         cout<<temp->cofficient<<"x^"<<temp->exponents<<"+ ";
         temp = temp->next;
      }
      cout<<endl;
   }
}
void polyadd(node*head1,node*head2){
   node*ptr1 = head1; //for first polynomial
   node*ptr2 = head2; //for second polynomial
   node*ptr = NULL; //for resultant polynomial
   while(ptr1!=NULL && ptr2!=NULL){
      if((ptr1->exponents)==(ptr2->exponents)){
         ptr = insert(ptr,ptr1->cofficient+ptr2->cofficient,ptr1->exponents);
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
      }
      else if(ptr1->exponents > ptr2->exponents){
         ptr = insert(ptr,(ptr1->cofficient),ptr1->exponents);
         ptr1 = ptr1->next;
      }
      else{
         ptr = insert(ptr,(ptr2->cofficient),ptr2->exponents);
         ptr2 = ptr2->next;
      }
   }
   while(ptr1!=NULL){
      ptr = insert(ptr,(ptr1->cofficient),ptr1->exponents);
      ptr1 = ptr1->next;
   }
   while(ptr2!=NULL){
        ptr = insert(ptr,(ptr2->cofficient),ptr2->exponents);
        ptr2 = ptr2->next;
   }
   cout<<"Addition of the polynomials is : "<<endl;
   print(ptr);
}
void polymultiplication(node*head1, node*head2){
       node*ptr1=head1;
       node*ptr2=head2;
       node*result = NULL;
       if(head1==NULL || head2==NULL){
           cout<<"Zero polynomial";
           return;
       }
       while(ptr1!=NULL){
           ptr2 = head2;
           while(ptr2!=NULL){
               int rescoff = ptr1->cofficient*ptr2->cofficient;
               int resexpo = ptr1->exponents+ptr2->exponents;
               result = insert(result,rescoff,resexpo);
               ptr2=ptr2->next;
           }
           ptr1 = ptr1->next;
       }
       print(result);
}
int main(){
    node*head1=NULL;
    node*head2=NULL;
    head1=insert(head1,3,3);
    head1=insert(head1,4,3);
    head1=insert(head1,3,0);
    head2=insert(head2,8,3);
    head2=insert(head2,6,2);
    head2=insert(head2,3,1);
    cout<<"first polynomial is : "<<endl;
    print(head1);
    cout<<"\nsecond polynomial is : "<<endl;
    print(head2);
    polyadd(head1,head2);
    cout<<"\nAfter multiplication the polynomial is : "<<endl;
    polymultiplication(head1,head2);
}