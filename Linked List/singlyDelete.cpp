#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
        ~Node(){
            cout<<"Destructor called for: "<<this->data<<endl;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);

        if(position < 1){
            cout<<"Cannot insert"<<endl;
            return;
        }
        
        else if(position <= 1) {
                insertAtHead(head, tail , data);
                return;
        }
         else if(position > len) {
                insertAtTail(head,tail,data);
                 return;
        }
        //important ---->
        else if(position == len+1){
            insertAtTail(head, tail, data);
        }
        else {
            //creating new node
            Node* newNode = new Node(data);
            
            //traverse previous //current to position
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

void deleteNode(Node* &head, Node* &tail, int position){
    //empty list
    if(head == NULL){
       cout<<"can't delete as node is empty"<<endl;
       return; 
    }
    else if(head == tail){
        //single element
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    int len = findLength(head);
    //delete from head
    if(position == 1){
        //delete head node
        Node* temp = head;
        //head moves to next
        head = head->next;
        //temp is isolated
        temp->next = NULL;
        delete temp;

    }
    else if(position == len){
     //delete tail node
     //find previous node
     Node* prev = head;
     //till we reach the node before tail
     while(prev -> next != tail){
        prev = prev -> next;
     }
     prev -> next = NULL;
     delete tail;
     //update tail
     tail = prev;
    }
    else{
        //delete middle node
        //set prev/curr pointers
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            position--;
            prev = curr;
            curr = curr->next;
        }
        //prev->next me curr->next ko add karo
        prev -> next = curr->next;
        //isolate the node
        curr->next = NULL;
        delete curr;
    }
}

int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtTail(head, tail,10);
        insertAtTail(head, tail,20);
        insertAtTail(head, tail,30);
        insertAtTail(head,tail, 40);
        insertAtTail(head,tail, 50);
        

        print(head);
        cout << endl;
        cout<<"After deleting element: "<<endl;
        // insertAtPosition(100, 3, head, tail); 
        // print(head);
        deleteNode(head, tail, 1);
        print(head);

        return 0;
}
