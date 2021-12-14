#include<iostream>
#include<climits>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int d){
    data=d;
    next=NULL;
  }
};

struct mystack{
  Node *head;
  int size;
  mystack(){
    head=NULL; 
    size=0;
  }
  void push(int x){
    Node *temp=new Node(x);
    temp->next=head;
    head=temp;
    size++;
  }
  int pop(){
    if(head==NULL) return INT_MAX;

    int res=head->data;
    Node *temp=head->next;
    head=head->next;
    delete(temp);
    size--;
    return res;
  }

  int size(){ return size;}
  bool isempty(){return (head==NULL);}
  int peek(){
    if(head==NULL) return INT_MAX;
    return head->data;
  }
};