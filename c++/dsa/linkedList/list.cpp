#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void display(Node* &n){
    while( n != NULL){
        cout<< n->data <<endl;
        n = n -> next ;
    }
}

void insertAtFront(Node** head, int newData){
        // 1. prepare new node
         Node* newNode = new Node();
         newNode -> data = newData;
        // 2. put it in front of current head  
        newNode -> next = *head; 
        // 3. move head of the list to point to the ndeNode
        *head = newNode;
}

void inserAtEnd(Node** head, int newData){

    //1. prepare new node
    Node* newNode = new Node();
    newNode -> data = newData;
    newNode -> next = NULL;

    //2. if linkedList is empty new node will be head node
    if (*head = NULL){
        *head = newNode ;
    }

}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
        head -> data = 1;
        head -> next = second;
            second -> data = 2;
            second -> next = third;
        third -> data = 3;
        third -> next = NULL;

    insertAtFront(&head,100);
    insertAtEnd();
    display(head);
}