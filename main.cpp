#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue *queue = new Queue();

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);

    queue->enqueue(node1);
    queue->enqueue(node2);
    queue->enqueue(node3);
    queue->enqueue(node4);
    queue->enqueue(node5);

    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    Node* node6=queue->dequeue();
    cout<<"Dequeue: ";
    cout<<node6->data<<endl;
    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    Node* node7=queue->dequeue();
    cout<<"Dequeue: ";
    cout<<node7->data<<endl;
    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    Node* node8=queue->dequeue();
    cout<<"Dequeue: ";
    cout<<node8->data<<endl;
    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    Node* node9=queue->dequeue();
    cout<<"Dequeue: ";
    cout<<node9->data<<endl;
    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    Node* node10=queue->dequeue();
    cout<<"Dequeue: ";
    cout<<node10->data<<endl;
    cout<<"List: ";
    queue->printvals();
    cout<<endl;

    queue->dequeue();


    return 0;
}
