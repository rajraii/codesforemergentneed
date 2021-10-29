// Make a DS with search delete insert functionality

#include<iostream>
#include<vector>
using namespace std;


// Naive approach with vectors as they cant large keys(phone number), floating point key, string keys or adress keys 
class functionality{
  private:
    vector<int>v {(999,0)};
  public:
    void insert(int val){
      v[val]=1;
    }
    void Delete(int val){
      v[val]=0;
    }
    bool search(int val){
      return v[val];
    }
};

int main(){
  functionality f;
  int a,b;
  cin>>a>>b;
  f.insert(a);
  f.insert(b);
  f.Delete(a);
  cout<<f.search(a)<<endl;
}

