#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

// constructor
    Node( int data){
        this ->data = data;
        this -> next = NULL;
    }

// destructor
    Node(){
        int value = this -> data;
        if (this -> next != NULL)
        {
            /* code */
            delete next;
            this -> next = NULL;
        }
        
    }
};

void InsertAtHead(Node* &head, int d)
{
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 0;
    while (cnt<position - 1)
    {
        /* code */
        temp = temp -> next;
        cnt++;
    }

    // insert at tail
    if (temp -> next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp->next;
    temp ->next = nodeToInsert;
    
}
void insertAtTail(Node* &tail, int d)
{
    // new node at tail
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while( temp!= NULL)
        {
            cout<< temp->data<<" ";
            temp = temp->next;
        }
    cout<<endl;
}


void deletion( int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

int main(){

    Node* node1 = new Node(10);
    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;
    
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtHead(head, 20 );
    print(head);

    insertAtTail(tail, 45);
    print(head);

    insertAtPosition(tail,head, 3, 500);
    print(head);
    // insertAtTail(head, 450);
    // print1(head);
    return 0;
}

