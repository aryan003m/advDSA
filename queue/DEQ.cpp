// #include<bits/stdc++.h>

// using namespace std;
// class Dq{
//     int capacity;
//     int front;
//     int rear;
//     int size;
//     int*arr;
//     public:
//     Dq(int cap){
//         capacity = cap;
//         front = rear = -1;
//         arr = new int[capacity];
//         size = 0;
//     }
//     ~Dq(){
//         delete[] arr;
//     }
//     bool isFull(){
//         return size == capacity -1;
//     }
//     bool isEmpty(){
//         return size == 0;
//     }

//     void insertFront(int val){
//         if(isFull()){
//             cout<<"queue is full";
//         }
//         if(isEmpty()){
//             rear = 0;
//             front = 0;
//         }
//         else if(front==0){
//             front = capacity -1;
//         }
//         else{
//             front--;
//         }
//         arr[front] = val;
//         size++;

//     }

//     void insertRear(int val){
//         if(isFull()){
//             cout<<"queue is full";

//         }
//         if(isEmpty()){
//             rear = 0;
//             front = 0;
//         }
//         else if(rear == capacity - 1){
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = val;
//         size++;

//     }

//     void deleteFront(){
//         if(isEmpty()){
//             cout<<"queue is empty"<<endl;
//         }
//         cout<<"element"<<arr[front]<<endl;
//         if(front == rear){
//             front = 0;
//             rear = 0;
//         }
//         else if(front == capacity -1 ){
//             front = 0;

//         }
//         else{
//             front++;
//         }
//         size--;
//     }
//     void deleteRear(){
//         if(isEmpty()){
//             cout<<"queue is empty"<<endl;
//         }
//         cout<<"element"<<arr[front]<<endl;
//         if(front == rear){
//             front = 0;
//             rear = 0;
//         }
//         else if(rear == 0 ){
//             rear = capacity -1;

//         }
//         else{
//             rear--;
//         }
//         size--;
//     }

//     // Display

//     void display(){
//       if(isEmpty()){
//           cout<<"queue is empty"<<endl;
//         }
//         int i = front;
//         while(i!=rear){
//             cout<<arr[i]<<" ";
//             i = (i+1)%capacity;
//         }

//     }
// };


// int main(){
//     Dq q(5);
//     q.insertFront(9);
//     q.insertFront(10);
//     q.insertFront(11);
//     q.insertRear(100);
//     cout<<"queue"<<endl;
//     q.display();
//     q.deleteFront();
//     cout<<"queue after deletion"<<endl;
//     q.display();
       
   
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Dq {
    int capacity;
    int front;
    int rear;
    int size;
    int* arr;

public:

    Dq(int cap) {
        capacity = cap;
        front = rear = -1;
        size = 0;
        arr = new int[capacity];
    }

    ~Dq() {
        delete[] arr;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void insertFront(int val) {

        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        // First element
        if (isEmpty()) {
            front = rear = 0;
        }

        // Move front circularly
        else if (front == 0) {
            front = capacity - 1;
        }

        else {
            front--;
        }

        arr[front] = val;
        size++;
    }

    void insertRear(int val) {

        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        // First element
        if (isEmpty()) {
            front = rear = 0;
        }

        // Move rear circularly
        else if (rear == capacity - 1) {
            rear = 0;
        }

        else {
            rear++;
        }

        arr[rear] = val;
        size++;
    }

    void deleteFront() {

        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Element deleted: " << arr[front] << endl;

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }

        else if (front == capacity - 1) {
            front = 0;
        }

        else {
            front++;
        }

        size--;
    }

    void deleteRear() {

        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Element deleted: " << arr[rear] << endl;

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }

        else if (rear == 0) {
            rear = capacity - 1;
        }

        else {
            rear--;
        }

        size--;
    }

    void display() {

        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;

        for (int count = 0; count < size; count++) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }

        cout << endl;
    }
};

int main() {

    Dq q(5);

    q.insertFront(9);
    q.insertFront(10);
    q.insertFront(11);
    q.insertRear(100);

    cout << "Queue: ";
    q.display();

    q.deleteFront();

    cout << "Queue after deletion: ";
    q.display();

    return 0;
}