#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> nums, int key){
  int target=-1;
  int count=-1,prev=0;
  int curr=1;
  bool flag=false;
  for(int i=0;i<nums.size()-1;i++){
    
    if(nums[i]==key && flag==false){
      if(curr>prev){
        target= nums[i+1];
        prev=curr;
        curr++;
      }
    }
    // else if(nums[i]==key && nums[i+1]=target) count++;
    // else if()
    
    // if(prev=0){
    //   if(nums[i]==key){
    //     target= nums[i+1];
    //     flag=true;
    //   }
    // }
    // else{
    //   if(nums[i]==key && nums[i+1]==target){
    //     count++;
    //   }
    // }
  }
  return target;
}
int main(){
  vector<int> nums={2,2,2,2,3};
  int key=2;
  cout<<fun(nums,key)<<endl;
  return 0;
}