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

//     // ~Queue(){
//     //     delete[] arr;
//     // }

//     void enqueue(int val){
//         if(front == (rear+1)%size){
//             cout << "Queue Overflow\n";
//             return;
//         }
//         else{
//             rear = (rear+1)%size;
//             arr[rear]= val;
//         }

        
//     }

//     int dequeue(){
//         if(front== rear == -1){
//             cout << "Queue is Empty";
//             return -1;
//         }
//         else{
        
//             front = (rear+1)%size;
//             int x= arr[front];
//             return x;
//         }
            
           
        
//     }

//     void display(){
//         if(front == rear){
//             cout << "Queue is Empty";
//             return;
//         }
//         else{
//             int i = (front+1)%size;
//         while(i!=(rear+1)%size){
//         cout<< arr[i]<<" ";
//          i= (i+1)%size;
//         }
//         cout<<endl;
        
        
//         }
//     }
// };

// int main(){
//     Queue q(5);

//     q.enqueue(9);
//     q.enqueue(4);
//     q.enqueue(6);

//     q.display();
//     cout << "Dequeued element: " << q.dequeue() << endl;
//     q.display();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    int size;
    int rear;
    int front;
    int *arr;

    Queue(int n) {
        size = n;
        rear = -1;
        front = -1;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int val) {

        if (front == (rear + 1) % size) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = val;
    }

    int dequeue() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return -1;
        }

        int x = arr[front];

      
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return x;
    }

    void display() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main() {

    Queue q(5);

    q.enqueue(9);
    q.enqueue(4);
    q.enqueue(6);

    q.display();

    cout << "Dequeued element: " << q.dequeue() << endl;

    q.display();

    return 0;
}