#ifndef QUEUE_IMPLEMENTATIONS_QUEUE_H
#define QUEUE_IMPLEMENTATIONS_QUEUE_H
#include "Node.h"
class Queue{
public:
    Queue();
    void enqueue(Node*);
    void printvals();
    Node* dequeue();
    Node* peek();
    int size();
    bool isEmpty();

private:
    Node *front;
    Node *back;
};
#endif
