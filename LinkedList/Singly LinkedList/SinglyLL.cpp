#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void traverseList(Node *n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    cout<<"Singly LinkedList"<<endl;
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
        //allocating address for the nodes
    head = new Node();
    second = new Node();
    third = new Node();
    //Inserting value to the Nodes
    head->data = 1;
    head->next = second;  //This Node Points to the Next Node aka. Linked to next Node.

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    //Traversing and printing the whole list.
    traverseList(head);    

    
}
