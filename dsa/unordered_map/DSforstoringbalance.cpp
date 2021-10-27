// DS for storing balance
// 1- Add value with key
// 2- Return value at key

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//  Naive aproach - Vector of pair

class DS
{
private:
  vector<pair<int, int>> v;

public:
  void Set(int id, int bal)
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (v[i].first == id)
      {
        v[i].second = bal;
        return;
      }
    }
    v.push_back({id, bal});
  }
  int get(int id)
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (v[i].first == id)
        return v[i].second;
    }
    return 0;
  }
};

// Efficient Approach - Unordered_map with O(n)

class Ds{
  private:
    unordered_map<int,int> m;
  public:
    int get(int id){
      return m[id];
    }
    void set(int id, int bal){
      m[id]=bal;
    }
};

int main()
{
  DS d;
  Ds D;
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    int a,b;
    cin >> a >> b;
    d.Set(a,b);
    D.set(a,b);
  }
  cout<<d.get(2)<<endl;
  cout << D.get(2)<<endl;
}