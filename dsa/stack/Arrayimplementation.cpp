#include<iostream>
using namespace std;

struct mystack{
  int *arr;
  int cap;
  int top;
  mystack(int c){
    cap=c;  //capacity
    arr=new int[cap]; // dynamically allocating memory
    top=-1; //
  }
  void push(int x){
    if(top==cap-1) {} //overflow condition
    top++;
    arr[top]=x;
  }
  int pop(){
    if(top==-1) {}// underflow condition
    int res=arr[top];
    top--;
    return res;
  }
  int peek(){
    if(top==-1) {} // underflow condition
    return arr[top];
  }
  int size(){
    return top+1;
  }
  bool isempty(){
    return (top==-1);
  }
};

int main(){
  int n; cin>>n;
  mystack s(n);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout<<s.pop()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.size()<<endl;
  cout<<s.isempty()<<endl;
}
