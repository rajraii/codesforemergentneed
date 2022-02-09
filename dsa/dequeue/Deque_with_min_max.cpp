#include<iostream>
#include<deque>
using namespace std;
struct myDS{
  deque<int> d;
  void insertMin(int x) {d.push_front(x);}
  void insertMax(int x) {d.push_back(x);}
  int getMin(){return d.front();}
  int getMax(){return d.back();}
  // int extractMin(){return d.pop_front();}
  // int extractMax(){return d.pop_back();}
};
