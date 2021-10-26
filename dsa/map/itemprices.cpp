// DS for Item and Prices
// add, find, print sorted, print greatersorted(price), print smallersort(price)
#include<iostream>
#include<map>
using namespace std;
class price{
  private:
    map<int,string> m;
  public:
    void add(int price, string name){
      m[price]=name;
    }
    string find(int price){
      if(m.find(price)==m.end()) return "";
      else return m.find(price)->second;
    }
    void printSorted(){
      for(auto i: m)
        cout<<i.second<<" "<<i.first<<endl;
    }
    void printGreaterSorted(int price){
      auto it=m.upper_bound(price);
      while(it!=m.end())
        cout<<it->second<<it->first<<endl;
    }
    void printSmallerSorted(int price){
     auto i=m.lower_bound(price);
     for(auto j=m.begin();j!=i;j++){
       cout<<j->second<<" "<<j->first;
     } 
    }
};
int main(){
  price p;
  for(int i=0;i<5;i++){
    int a; cin>>a;
    string b; cin>>b;
    p.add(a,b);
  }
  p.printSorted();
  p.printGreaterSorted(3);
  p.printSmallerSorted(3);
}