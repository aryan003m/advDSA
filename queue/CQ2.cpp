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

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() {
        front = rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (front == NULL) {
            front = rear = newNode;
            rear->next = front;
        }
        else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }

        cout << value << " inserted\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }

        if (front == rear) {
            cout << "Deleted: " << front->data << endl;

            delete front;

            front = rear = NULL;
        }
        else {
            Node* temp = front;

            cout << "Deleted: " << front->data << endl;

            front = front->next;
            rear->next = front;

            delete temp;
        }
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

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);

        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    q.peek();

    return 0;
}