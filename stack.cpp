// implemntation of stack using array
// implemntation of stack using linklist
// wap to implment infix to postfix
// wap to reverse a string using stack

//q1
// #include <bits/stdc++.h>
// using namespace std;
// class Stack{
//     public:
//     int top;
//     int size;
//     int*arr;
//     Stack(int size){
//         top=-1;
//         this->size=size;
//         arr= new int[size];
        
//     }

// void push(int val){
//     if(top==size-1){
//         cout<<"overflow";
//     }
//     else{
//         top++;
//         arr[top]=val;
//     }
// }
// int pop(){
//     if(top==-1){
//         cout<<"empty";
//         return -1;
//     }

//     else{
//         int x = arr[top];
//         top--;
//         return x;

//     }
// }
// void peek() {
//         if (top == -1)
//             cout << "Stack is Empty" << endl;
//         else
//             cout << "Top Element: " << arr[top] << endl;
//     }

//     void display() {
//         if (top == -1) {
//             cout << "Stack is Empty" << endl;
//             return;
//         }

//         cout << "Stack Elements: ";
//         for (int i = top; i >= 0; i--)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };
// int main(){
//     Stack s(3);
//     s.push(6);
//     s.push(5);
//     s.push(9);
//     s.display();
//     cout<<"pop:"<<s.pop()<<endl;
//     s.peek();
//     s.display();
    
//     return 0;
//  }

//  //Q2

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class Stack {
//     Node* top;

// public:
//     Stack() {
//         top = NULL;
//     }

//     void push(int x) {
//         Node* a = new Node();
//         a->data = x;
//         a->next = top;
//         top = a;
//     }

//     void pop() {
//         if (top == NULL) {
//             cout << "Stack Underflow"<<endl;
//             return;
//         }

//         cout << top->data << " removed"<<endl;
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//     }

//     void peek() {
//         if (top == NULL)
//             cout << "Stack Empty\n";
//         else
//             cout << top->data << endl;
//     }

//     void display() {
//         Node* temp = top;

//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }

//         cout << endl;
//     }
// };

// int main() {

//     Stack s;

//     s.push(5);
//     s.push(10);
//     s.push(15);

//     s.display();

//     s.pop();

//     s.display();
//     return 0;
// }

// QUESTION 3

// #include <iostream>
// #include <stack>
// using namespace std;

// int prec(char c)
// {
//     if(c=='^') return 3;
//     if(c=='*'||c=='/') return 2;
//     if(c=='+'||c=='-') return 1;
//     return 0;
// }

// int main()
// {
//     string infix;
//     cout<<"etnter string"<<endl;
//     cin>>inafix;
//     stack<char> st;
//     string posfix;

//     for(char ch:infix)
//     {
//         if(isalnum(ch))
//             posfix+=ch;

//         else
//         {
//             while(!st.empty() && prec(st.top())>=prec(ch))
//             {
//                 posfix+=st.top();
//                 st.pop();
//             }

//             st.push(ch);
//         }
//     }

//     while(!st.empty())
//     {
//         posfix+=st.top();
//         st.pop();
//     }

//     cout<<posfix;
//     return 0;
// }

//Q4
// 

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    stack<char> s;
    string reverse = "";

    for (char c : str) {
        s.push(c);
    }
    while (!s.empty()) {
        reverse += s.top();
        s.pop();
    }

    cout << "Original string: " << str << endl;
    cout << "Reverse string: " << reverse << endl;

    return 0;
}