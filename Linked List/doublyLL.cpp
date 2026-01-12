#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Node(){
    //     this->prev = NULL;
    //     this->next = NULL;
    // }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }
    else{
        //LL is not empty
       Node* newNode = new Node(data);
       newNode ->next = head;
       head ->prev = newNode;
       head = newNode; 
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
     }
    else{
        int len = findLength(head);
        if(pos == 1){
            insertAtHead(head, tail, data);
        }
        else if(pos == len+1){
            insertAtTail(head, tail, data);
        }
        else{
            //insert at middle
            Node* newNode = new Node(data);
            //set previous and current
            Node* prevNode = head;
            Node* currNode = head;
            while(pos != 1){
                pos--;
                prevNode = currNode;
                currNode = currNode->next;
            }
            //pointers
            prevNode->next = newNode;
            newNode->prev = prevNode;

            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    print(head);
    cout<<endl;
    //  cout<<"After inserting element at tail"<<endl;
    // insertAtTail(head, tail, 1000);
    // print(head);
    // cout<<endl;
    cout<<"After inserting element at a position : "<<endl;
    insertAtPosition(head, tail, 500, 2);
    print(head);

}