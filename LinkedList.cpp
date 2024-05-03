#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) : data(d), next(nullptr) {}
};

int main() {
    Node* head = new Node(5);
    Node* secondNode = new Node(10);
    Node* thirdNode = new Node(15);

    head->next = secondNode;
    secondNode->next = thirdNode;

    Node* it = head;

    while (it != nullptr) {
        cout << it->data << " ";
        it = it->next;
    }
    cout << endl;

    // Remember to deallocate memory to prevent memory leaks
    delete head;
    delete secondNode;
    delete thirdNode;

    return 0;
}
