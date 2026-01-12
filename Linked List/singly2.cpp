#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        //cout<<"I am inside default constructor "<<endl;
        this->next = NULL;
    }
    Node(int data){
    //cout << "I am inside the parameterized constructor" << endl;
        this->data = data;
        this->next = NULL;    
    }

};


void createTail(Node* head, Node* &tail){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    tail = temp;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
  cout<<endl;
}

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        //create new node
        Node* newNode = new Node(data);
        //update head
        head = newNode;
    }
    else{
    //create a node
    Node* newNode = new Node(data);
    //attach new node to the head node
    newNode -> next= head;
    //update head
    head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
     //Node creation
     Node* newNode = new Node(data); 
     //single node hai entire list me
     //thats why head and tail ko ispe point kara do
     head = newNode;
     tail = newNode;  
    }
    else{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Inserting nodes at the head
    insertAtHead(head, 10);
    insertAtHead(head,  20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    // Since we inserted all nodes at the head, we need to create the tail after the insertions
    createTail(head, tail);
    insertAtTail(head,tail, 100);

    printLinkedList(head);

    return 0;
}