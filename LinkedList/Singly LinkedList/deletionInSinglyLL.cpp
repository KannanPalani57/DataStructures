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
  new_node->next = *head;
  *head = new_node;
}

void insert(Node **head, int new_data){
  Node *new_node = new Node();
  new_node->data = new_data;
  new_node->next = NULL;
  Node *last = *head;
  while(last->next != NULL){
    last = last->next;
  }
  last->next = new_node;
  return;
}

void deleteTheNode(Node **head, int n){
  Node *temp1 = *head;
  if(n == 1){
    *head = temp1->next;   //It shoudl like (*temp1.next) 
    free(temp1);
    return;
  }
  int i;
  for(i = 0; i < n-2; i++){
    temp1 = temp1->next;
  }
  Node *temp2 = temp1->next;
  temp1->next = temp2->next;
  free(temp2);
}

void printList(Node *head){
  while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}

int main(){
  Node *head = NULL;
  push(&head, 5);  
  push(&head, 10);
  push(&head, 20);
  insert(&head, 40);
  printList(head);
  cout<<"Enter the position to delete : "<<endl;
  int n;
  cin>>n;
  deleteTheNode(&head, n);
  printList(head);
  return 0;
}