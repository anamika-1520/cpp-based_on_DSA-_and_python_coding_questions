                                
//SORTING A LINKED LIST USING MERGE SORT*****
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;


class Node {
public:
    
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


Node* mergeTwoSortedLinkedLists(Node* list1, Node* list2) {
    // Create a dummy node to serve
    // as the head of the merged list
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while (list1 != nullptr && list2 != nullptr) {
        
        if (list1->data <= list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        
        temp = temp->next; 
    }
    if (list1 != nullptr) {
        temp->next = list1;
    } else {
        temp->next = list2;
    }
    return dummyNode->next;
}


Node* findMiddle(Node* head){
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;

    // Move the fast pointer twice as fast as the slow pointer
    // When the fast pointer reaches the end, the slow pointer
    // will be at the middle
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


Node* sortLL(Node* head){
    
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    

    Node* middle = findMiddle(head);
    Node* right = middle->next;
    middle->next = nullptr;
    Node* left = head;
    
    left = sortLL(left);
    right = sortLL(right);
    
    return mergeTwoSortedLinkedLists(left, right);
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        // Print the data of the current node
        cout << temp->data << " "; 
        // Move to the next node
        temp = temp->next; 
    }
    cout << endl;
}


int main() {

    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLinkedList(head);

    // Sort the linked list
    head = sortLL(head);

    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}

                                
                            