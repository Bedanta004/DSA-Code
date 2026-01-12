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

int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
//creation of Node static allocation
//Node a;
    //Node* head = new Node();//Dynamic allocation
    //As parameters are passed so parameterised constructr will be called
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third= new Node(30);
   Node* forth = new Node(40);
   Node* fifth = new Node(50);

first->next = second;
second-> next = third;
third->next = forth;
forth->next = fifth;
   //Linked List created

   Node* head = first;
   cout<<"Printing the linked list: "<<endl; 
   printLinkedList(head);

   //printing length of linkedlist
   cout<<"Length of Linked List is: "<<getLength(head)<<endl;

} 

