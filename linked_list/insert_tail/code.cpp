// insert At Tail

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node *next;//point addres
//         //craeting a node
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };   

// // inserat a tail(//craeting a NEW node)
// void insertAtTail(Node* &head, int data){
//     Node *newNode = new Node(data);  // ready newNode

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     Node *temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }

// void display(Node *&head)
// {
//     if(head == NULL){
//         cout << "LinkedList is Empty!" << endl;
//         return;
//     }

//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp->data << "->";
//         temp = temp->next;
//     }

//     cout << "NULL" << endl;

    
// }
// int main(){

//     Node *head = NULL;

//     insertAtTail(head, 10);
//     insertAtTail(head, 20);

//     // display(head);

//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);
//     insertAtTail(head, 60);

//     display(head);
// }

// //CHATGPT CODE
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) { // Constructor (jab bhi naya node banaye)
//         data = val;
//         next = nullptr;
//     }
// };

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() { // Constructor (pehle head NULL hoga)
//         head = nullptr;
//     }

//     void insertAtTail(int val) { // Last me insert karne ka function
//         Node* newNode = new Node(val); // Naya node banaya
//         if (head == nullptr) {  // Agar list khaali hai
//             head = newNode;
//             return;
//         }

//         Node* temp = head; // Head se start karenge
//         while (temp->next != nullptr) { // Last node tak jayenge
//             temp = temp->next;
//         }
//         temp->next = newNode; // Last node ke next me naya node daal diya
//     }

//     void display() { // List ko print karne ka function
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertAtTail(10);
//     list.insertAtTail(20);
//     list.insertAtTail(30);

//     list.display(); // Output: 10 -> 20 -> 30 -> NULL

//     return 0;
// }

//SHOW THE  Addresses
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display data and addresses
    void displayWithAddress() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << "Data: " << temp->data << ", Address: " << temp 
                 << ", Next Address: " << temp->next << endl;
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    list.displayWithAddress(); // Prints data and address of each node

return 0;
}