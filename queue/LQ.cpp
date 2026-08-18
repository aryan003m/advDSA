// #include <bits/stdc++.h>
// using namespace std;

// class Queue{
// public:
//     int size;
//     int rear;
//     int front;
//     int *arr;

//     Queue(int n){
//         size = n;
//         rear = -1;
//         front = -1;
//         arr = new int[size];
//     }

    // ~Queue(){
    //     delete[] arr;
    // }

//     void enqueue(int val){
//         if(rear == size - 1){
//             cout << "Queue Overflow\n";
//             return;
//         }

//         rear++;
//         arr[rear] = val;
//     }

//     int dequeue(){
//         if(rear == front){
//             cout << "Queue is Empty\n";
//             return -1;
//         }

//         front++;
//         return arr[front];
//     }

//     void display(){
//         if(front == rear){
//             cout << "Queue is Empty\n";
//             return;
//         }

//         for(int i = front + 1; i <= rear; i++)
//             cout << arr[i] << " ";

//         cout << endl;
//     }
// };

// int main(){
//     Queue q(5);

//     q.enqueue(9);
//     q.enqueue(4);
//     q.enqueue(6);

//     cout << "Dequeued element: " << q.dequeue() << endl;

//     q.display();

//     return 0;
// }

//wap to implement Linear Queue using LinkesLIst
//wap to decimal to binary using stack


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (front == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted into queue.\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = front;
        cout << "Deleted element: " << front->data << endl;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void peek() {
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front element: " << front->data << endl;
    }
    void display() {
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.peek();
    q.dequeue();
    q.display();
    return 0;
}