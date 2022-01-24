#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int x){
    data=x;
    next=NULL;
  }
};
class Queue{
  public:
  Node *front, *rear;
  int size;
  Queue(){
    front=NULL;
    rear=NULL;
    size=0;
  }
  void enque(int x){
    Node *temp= new Node(x);
    if(front== NULL){
      front=rear=temp;
      return;
    }
    rear->next=temp;
    rear=temp;
  }
  void deque(){
    if(front==NULL) return;
    Node *temp=front;
    front=front->next;
    if(front== NULL) rear=NULL;
    delete(temp);
  }
};