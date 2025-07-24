// C++ program to sort a doubly linked list 
// using insertion sort
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
Node* insertatend(Node*head,int data){
        Node*newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            //return head;
        }
        else{
         Node*temp=head;
         while(temp->next!=NULL){
             temp=temp->next;
         }
         //newnode->prev=temp;
          temp->next=newnode;
         newnode->prev=temp;
        }
    return head;
}


// Function to sort the doubly linked list 
// using insertion sort
Node* insertionSort(Node* head) {
    if (head == nullptr) return head;

    Node* sorted = nullptr;
    Node* curr = head;

    // Traverse the list to sort each element
    while (curr != nullptr) {
      
        // Store the next node to process
        Node* next = curr->next;

        // Insert `curr` into the sorted part
        if (sorted == nullptr || 
                      sorted->data >= curr->data) {
            curr->next = sorted;

            // If sorted is not empty, set its `prev`
            if (sorted != nullptr) sorted->prev = curr;

            // Update sorted to the new head
            sorted = curr;
            sorted->prev = nullptr;

        } 
       else {
          
            // Pointer to traverse the sorted part
            Node* current_sorted = sorted;

            // Find the correct position to insert
            while (current_sorted->next != nullptr &&
                   current_sorted->next->data < curr->data) {
                current_sorted = current_sorted->next;
            }

            // Insert `curr` after `current_sorted`
            curr->next = current_sorted->next;

            // Set `prev` if `curr` is not inserted 
            // at the end
            if (current_sorted->next != nullptr) 
                current_sorted->next->prev = curr;

            // Set `next` of `current_sorted` to `curr`
            current_sorted->next = curr;
            curr->prev = current_sorted;
        }

        // Move to the next node to be sorted
        curr = next;
    }

    return sorted;
}

void printList(Node* node) {
    Node* curr = node;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }
}

int main() {
    Node*head=NULL;
    head=insertatend(head,5);  
    head=insertatend(head,3);       
    head=insertatend(head,4);       
    head=insertatend(head,1);       
    head=insertatend(head,2);  
    printList(head);
    cout<<"\nsorted DLL IS :"<<endl;                    

    head = insertionSort(head);

    printList(head);

    return 0;
}
   