#include <iostream>

using namespace std;
//Linked List Class
class Node{
    public:
    int data;
    Node* next;
};

//Create a new node
Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}

//inserting the node at the start of the linked list
void push(Node** headRef, int data){
    Node* node = newNode(data);
    node->next = *headRef;
    *headRef = node;
}

int main(){
    cout << "Hello world!";
    return 0;
}