#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    front=NULL;
    back=NULL;
}
void Queue::enqueue(Node *item) {
    if(isEmpty()){
        front = item;
        back = item;
    }
    else{
        while(back->next!=0){
            back = back->next;
        }
        back->next=item;
        item->next=NULL;
        back=item;
    }
}
Node* Queue::dequeue() {
    if(isEmpty()){
        cout<<"There is nothing to dequeue";
        return NULL;
    }
    else if(!isEmpty() && front->next==NULL){ //1 item situation
        Node *temp = front;
        front=NULL;
        back=NULL;
        return temp;
    }
    else{
        Node *temp = front;
        front=front->next;
        return temp;
    }

}
void Queue::printvals() {
    Node *n = front;
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    if(isEmpty()){
        cout<<"Empty queue";
    }
}
bool Queue::isEmpty() {
    return front==NULL;
}