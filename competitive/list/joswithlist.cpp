// idea is to create a circular linkedlist, traverse and operate
// Time complexity=O(n*k) space complexity = O(n)
// not the best solution just to implement list
#include <iostream>
#include <list>
using namespace std;
int jos(int n, int k)
{
  list<int> l;
  for (int i = 0; i < n; i++)
    l.push_back(i); //pushing elements
  
  auto it = l.begin();
  while (l.size() > 1)
  {
    for (int count = 1; count < k; count++)
    {
      it++; // to get the kth element
      if (it == l.end())
        it = l.begin(); //Imp condition so that we traverse in a circulate manner
    }
    it = l.erase(it);
    if (it == l.end())
      it = l.begin(); // again if the it=n we need to assure we traverse in circular manner
  }
  return *l.begin();
}
int main()
{ 
  int n, k;
  cin >> n >> k;
  cout << jos(n, k);
}