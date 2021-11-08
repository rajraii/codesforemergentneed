// hash key= key%7
// got to the desiredd key value
// if space is there put the value
// else traverse linearly to find the next empty space
#include <iostream>
#include <vector>
using namespace std;

void linearProbing(int a[], int n)
{
  vector<int> v(10, -1);
  for (int i = 0; i < n; i++)
  {
    int h = a[i] % 10;
    if (v[h] == -1)
      v[h] = a[i];
    else
    {
      int count=0;
      for(int j=0;j<n; j++){
        h=(h+1)%10;
        if(v[h]==-1) {
          v[h]=a[i];
          break;
        }
      }
    }
  }
  for (auto i : v)
    cout << i << " ";
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  linearProbing(a, n);
}