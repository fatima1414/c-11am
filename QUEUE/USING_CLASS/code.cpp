// using class
#include <iostream>
#include <queue>
using namespace std;
 
 class Queue
 {
 public:
     queue<int> myqueue;
 
     void push(int data)
     {
         myqueue.push(data);
     }
 
     int pop()
     {
 
         if (myqueue.size() == 0)
         {
             cout << "queue is Underflow!" << endl;
             return -1;
         }

         myqueue.pop();
     }
 
     void display()
     {
 
         if (myqueue.size() == 0)
         {
             cout << "queue is Empty!" << endl;
         }
 
         while (myqueue.size() > 0)
         {
             cout << myqueue.front() << " ";
             myqueue.pop();
         }
     }
 };
 
 int main()
 {
    Queue q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     q.push(60);
     q.push(70);
  
     q.pop();
     q.pop();
     q.pop();
     q.display();
    //  q.display();
 }