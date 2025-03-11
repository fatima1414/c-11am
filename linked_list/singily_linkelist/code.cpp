// 1 insert At Tail

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

// //SHOW THE  Addresses
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() {
//         head = nullptr;
//     }

//     void insertAtTail(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // Function to display data and addresses
//     void displayWithAddress() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << "Data: " << temp->data << ", Address: " << temp
//                  << ", Next Address: " << temp->next << endl;
//             temp = temp->next;
//         }
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertAtTail(10);
//     list.insertAtTail(20);
//     list.insertAtTail(30);
//     list.insertAtTail(40);
//     list.insertAtTail(50);
//     list.insertAtTail(60);

    // list.displayWithAddress(); // Prints data and address of each node

// return 0;
// }

//  2    Insert At Head
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next; // point addres
//     // craeting a node
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

//     //  inserat a tail(//craeting a NEW node)
// void insertAtTail(Node *&head, int data)
// {
//     Node *newNode = new Node(data); // ready newNode

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }

// //         creating a HEAD
// void insertAtHead(Node *&head, int data)
// {
//     Node *newNode = new Node(data);

//     newNode->next = head;

//     head = newNode;
// }

// //       TO PRINT
// void display(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "LinkedList is Empty!" << endl;
//         return;
//     }

//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }

//     cout << "NULL" << endl;
// }
// int main()
// {

//     Node *head = NULL;

//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     // display(head);
//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);
//     insertAtTail(head, 60);

//     display(head);

//     // TO PRINT A HEAD
//     display(head);
//     insertAtHead(head, 1000);
//     insertAtHead(head, 2000);
//     insertAtHead(head, 3000);
//     display(head);
// }


// 3 specific position
// #include <iostream>
// using namespace std;

// // Define the Node class
// class Node
// {
// public:
//     int data;   // Stores the data of the node
//     Node *next; // Pointer to the next node

//     // Constructor to initialize a new node
//     Node(int data)
//     {
//         this->data = data; // Set the data for the node
//         this->next = NULL; // Initialize next to NULL as it is the last node initially
//     }
// };

// // Function to insert a node at the tail (end) of the linked list
// void insertAtTail(Node *&head, int data)
// {
//     Node *newNode = new Node(data); // Create a new node with the given data

//     // If the linked list is empty (head is NULL), make newNode the head
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     // Traverse the list to find the last node
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next; // Move to the next node
//     }

//     // Attach the new node to the last node
//     temp->next = newNode;
// }

// void insertAtHead(Node *&head, int data)
// {
//     // Create a new node with the provided data
//     Node *newNode = new Node(data);

//     // Point the new node to the current head of the list
//     newNode->next = head;

//     // Make the new node the head of the list
//     head = newNode;
// }

//  // Insert a position
// int insertAtPosition(Node *&head, int position, int data)
// {

//     Node *newNode = new Node(data);

//     if (position == 1)
//     {
//         newNode->next = head;
//         head = newNode;
//         return 0;
//     }

//     Node *temp = head;

//     for (int i = 1; i < position - 1; i++)
//     {

//         temp = temp->next;

//         if (temp == NULL)
//         {
//             cout << "Position out of bound!" << endl;
//             return -1;
//         }
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // Function to display the entire linked list
// void display(Node *&head)
// {
//     // If the list is empty, print an appropriate message
//     if (head == NULL)
//     {
//         cout << "LinkedList is Empty!" << endl;
//         return;
//     }

//     // Traverse the list and print each node's data
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->"; // Print current node's data
//         temp = temp->next;          // Move to the next node
//     }

//     // End of the list, print NULL
//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *head = NULL; // Initialize an empty linked list

//     // Insert nodes at the tail of the list
//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);
//     insertAtTail(head, 60);

//     // Display the entire linked list
//     display(head);

//     insertAtPosition(head, 1, 1000);
//     insertAtPosition(head, 3, 3000);
//     display(head);
//     insertAtPosition(head, 10, 101010);

//     return 0;
// }

// 4 Update a Node
// #include <iostream>
// using namespace std;

// // Define the Node class
// class Node
// {
// public:
//     int data;   // Stores the data of the node
//     Node *next; // Pointer to the next node

//     // Constructor to initialize a new node
//     Node(int data)
//     {
//         this->data = data; // Set the data for the node
//         this->next = NULL; // Initialize next to NULL as it is the last node initially
//     }
// };

// // Function to insert a node at the tail (end) of the linked list
// void insertAtTail(Node *&head, int data)
// {
//     Node *newNode = new Node(data); // Create a new node with the given data

//     // If the linked list is empty (head is NULL), make newNode the head
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     // Traverse the list to find the last node
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next; // Move to the next node
//     }

//     // Attach the new node to the last node
//     temp->next = newNode;
// }

//  // updateNode code 
// void updateNode(Node *&head, int oldData, int newData)
// {
//     if (head == NULL)
//     {
//         cout << "LinkedList is Empty!" << endl;
//         return;
//     }

//     Node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == oldData)
//         {
//             temp->data = newData;
//             return;
//         }
//         else
//         {
//             temp = temp->next;
//         }
//     }

//     if (temp == NULL)
//     {
//         cout << "Node does not exist!" << endl;
//     }
// }
// // Function to display the entire linked list
// void display(Node *&head)
// {
//     // If the list is empty, print an appropriate message
//     if (head == NULL)
//     {
//         cout << "LinkedList is Empty!" << endl;
//         return;
//     }

//     // Traverse the list and print each node's data
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->"; // Print current node's data
//         temp = temp->next;          // Move to the next node
//     }

//     // End of the list, print NULL
//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *head = NULL; // Initialize an empty linked list

//     // Insert nodes at the tail of the list
//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);
//     insertAtTail(head, 60);

//     // Display the entire linked list
//     display(head);

//     updateNode(head, 20, 2000);

//     display(head);

//     // updateNode(head, 100, 5000);
//     return 0;
// }

// 5 DELETE NODE CODE 
#include <iostream>
using namespace std;

// Define the Node class
class Node
{
public:
    int data;   // Stores the data of the node
    Node *next; // Pointer to the next node

    // Constructor to initialize a new node
    Node(int data)
    {
        this->data = data; // Set the data for the node
        this->next = NULL; // Initialize next to NULL as it is the last node initially
    }
};

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // If the linked list is empty (head is NULL), make newNode the head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // Move to the next node
    }

    // Attach the new node to the last node
    temp->next = newNode;
}
// deleteNode code
void deleteNode(Node *&head, int deleteData)
{

    if (head == NULL)
    {
        cout << "Linked List underflow!" << endl;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == deleteData)
        {

            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

// Function to display the entire linked list
void display(Node *&head)
{
    // If the list is empty, print an appropriate message
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    // Traverse the list and print each node's data
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print current node's data
        temp = temp->next;          // Move to the next node
    }

    // End of the list, print NULL
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL; // Initialize an empty linked list

    // Insert nodes at the tail of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    // Display the entire linked list
    display(head);
    // delete
    deleteNode(head, 10);
    deleteNode(head, 50);

    display(head);

    return 0;
}