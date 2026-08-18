// You are provided an initially empty text editor. The editor supports the following operations: P x — Push character x onto the editor. U — Undo the most recent character insertion. T — Display the current text. The editor must be implemented using a stack based on a singly linked list. For every T operation, print the current text. If the editor is empty, print EMPTY. code in C++

#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        char data;
        Node* next;

        Node(char ch) {
            data = ch;
            next = nullptr;
        }
    };

    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push character
    void push(char ch) {
        Node* newNode = new Node(ch);

        newNode->next = top;
        top = newNode;
    }

    
    void pop() {
        if (top == nullptr)
            return;

        Node* temp = top;
        top = top->next;

        delete temp;
    }

    
    void display() {
        if (top == nullptr) {
            cout << "EMPTY" << endl;
            return;
        }

        
        displayReverse(top);
        cout << endl;
    }

    void displayReverse(Node* node) {
        if (node == nullptr)
            return;

        displayReverse(node->next);
        cout << node->data;
    }
};

int main() {
    Stack editor;

    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char operation;
        cin >> operation;

        if (operation == 'P') {
            char ch;
            cin >> ch;
            editor.push(ch);
        }
        else if (operation == 'U') {
            editor.pop();
        }
        else if (operation == 'T') {
            editor.display();
        }
    }

    return 0;
}