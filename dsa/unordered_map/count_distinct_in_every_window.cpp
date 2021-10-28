// Count Distinct element in every window

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//  Naive Solution - count with O(n*k*k)

int main()
{
  int v[] = {10, 10, 5, 3, 20, 5};
  int k = 4, n = 6;
  for (int i = 0; i <= n - k; i++)
  {
    int count = 0;
    for (int j = 0; j < k; j++)
    {
      bool check = false;
      for (int p = 0; p < j; p++)
      {
        if (v[i + j] == v[i + p])
        {
          check = true;
          break;
        }
      }
      if (check == false)
        count++;
    }
    cout << count << " ";
  }
  return 0;
}

// Efficient Solution - Hashing with O(n)

  // Freq Map of first K elements
  // Print size of freq Map
  // For(int i=k;i<n;i++)
    // Decrease freq of a[i-k]
    // if the freq of a[i-k]=0, delete it
    // if a[i] does not exist in map insert it, else increase freq
    // Print size of map

int main(){
  int v[] = {10, 10, 5, 3, 20, 5};
  int k = 4, n = 6;
  unordered_map<int,int> m;
  for(int i=0;i<k;i++)
    m[v[i]]++;
  cout<<m.size()<<" ";
  for(int i=k;i<n;i++){
    m[v[i-k]]--;
    if(m[v[i-k]]==0) m.erase(v[i-k]);
    m[v[i]]++;
    cout<<m.size()<<" ";
  }  
}