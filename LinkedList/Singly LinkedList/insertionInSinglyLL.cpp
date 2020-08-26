#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


void push(Node **head, int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;  //next node to head
    *head = new_node;  //make this node as head
}


void insertAtEnd(Node **head, int new_data){
    Node *new_node = new Node();

    //last node reference
    Node *last = *head;

    new_node->data = new_data;
    new_node->next = NULL;  //this node going to be at last. So make it Null.

    if(*head == NULL){
        *head = new_node;
        return;
    }

      /* 5. Else traverse till the last node */
    while (last->next != NULL)  {
        last = last->next; 
    }
        last->next = new_node;  
     return;   
  
    /* 6. Change the next of last node */
    
 
}

void insertAfter(Node *prev_node, int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next; //pointing next next Node
    prev_node->next = new_node;   //Previous node points next node
}

void traverseList(Node *n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}


int main(){
    Node *head = NULL;
    insertAtEnd(&head,5);   

    insertAtEnd(&head,3);
      insertAtEnd(&head,9);
  
    push(&head, 2);
    push(&head, 10);
    insertAfter(head->next, 15);
    insertAfter(head->next, 18);
    insertAtEnd(&head, 20);
    traverseList(head);
    return 0;
}

