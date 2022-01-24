// Implement Queue with array

#include<iostream>
using namespace std;

// ! Naive approach simple iteration

class queue{
  public:
  int *arr, size, cap;
  queue(int c){
    cap=c;
    arr=new int[cap];
    size=0;
  }
  bool isFull() {return (size==cap);}
  bool isEmpty(){return (size==0);}
  void enque(int x){
    if(isFull()) return;
    arr[size]=x;
    size++;
  }
  void deque(){
    for(int i=0;i<size-1;i++)
      arr[i]=arr[i+1];
    size--;
  }
  int getFront(){
    if(isEmpty()) return -1;
    return 0;
  }
  int getRear(){
    if(isEmpty()) return -1;
    return size-1;
  }
};

// ! Efficient Approach Implemnting withcircular Array

class Queue{
  public:
  int *arr,front, cap, size;
  Queue(int n){
    cap=n;
    arr= new int[cap];
    size=0;
    front=0;
  }
  int getFront(){
    if(size==cap) return -1;
    return front;
  }
  int getRear(){
    if(size==0) return -1;
    return (front + size -1) % cap;
  }
  void enque(int data){
    if(size==cap) return ;
    int rear = getRear();
    rear= (rear+1)% cap;
    arr[rear]=data;
    size++;
  } 
  void deque (){
    if(size==0) return;
    front= (front+1)%cap;
    size--;
  }
};