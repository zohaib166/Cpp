#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
    Node *head;

    public:
    LinkedList() {
        head = nullptr;
    }

    void appendNode(int data) {
        if(head == nullptr) {
            head = new Node(data);
            return;
        }
        Node *new_node = new Node(data);
        Node *ptr = head;
        while(ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }

    void insertAtHead(int data) {
        if(head == nullptr) {
            head = new Node(data);
            return;
        }
        Node *new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    void insertAtPosition(int data, int position) {
        Node *new_node = new Node(data);
        if(position < 1) {
            cout << "Invalid Position" << endl;
            return;
        }
        if(position == 1) {
            insertAtHead(data);
            return;
        }
        if(head==nullptr) {
            head = new Node(data);
            return;
        }
        Node* ptr = head;
        for(int i=1; i < position-1 && ptr!=nullptr; i++) {
            ptr = ptr -> next;
        }
        if(ptr!=nullptr) {
            new_node->next = ptr->next;
            ptr->next = new_node;
        } else {
            cout << "Invalid position" << endl;
            return;
        }
    }

    void show() {
        Node *ptr = head;
        while(ptr!=nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList sll;
    int arr[] = {1,2,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++) {
        sll.appendNode(arr[i]);
    }
    sll.show();

    sll.insertAtHead(10);

    sll.show();

    sll.insertAtPosition(34,9);

    sll.show();
}