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

int main(){

//Node a;
    //Node* head = new Node();//Dynamic allocation
   
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third= new Node(30);
   Node* forth = new Node(40);
   Node* fifth = new Node(50);
   Node* tail = fifth;

   first->next = second;
   second-> next = third;
   third->next = forth;
   forth->next = fifth;
   //Linked List created

   Node* head = first;
   cout<<"Printing the linked list: "<<endl; 
   printLinkedList(head);

   insertAtHead(head, 200);
   cout<<"After inserting element at head :"<<endl;
   printLinkedList(head);

   insertAtTail(head, tail, 400);
   cout<<"After inserting element at head and tail :"<<endl;
   printLinkedList(head);

  
}
