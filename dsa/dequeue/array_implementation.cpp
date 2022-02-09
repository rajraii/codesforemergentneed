#include<iostream>
using namespace std;

struct Deque{
  int size, cap;
  int *arr;
  Deque(int c){
    cap=c;
    size=0;
    arr = new int[cap];
  }
  bool isFull() {return size==cap;}
  bool isEmpty() {return size==0;}
  void insertRear(int x){
    if(isFull()) return;
    arr[size]=x;
    size++;
  }
  void deleteRear(){
    if(isEmpty()) return;
    size--;
  }
  int getRear(){
    if(isEmpty()) return -1;
    return arr[size];
  }
  void insertFront(int x){
    if(isFull()) return;
    for(int i=size-1;i>0;i--) arr[i+1]=arr[i];
    arr[0]=x;
    size++; 
  }
  void deleteFront(){
    if(isEmpty()) return;
    for(int i=0;i<size-1;i++) arr[i]=arr[i+1];
    size--;
  }
  int getFront(){
    if(isEmpty()) return -1;
    return arr[0];
  }
};
