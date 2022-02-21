// Write a program to print the series 4,6,12,18,30,42,60,72

// Here we can see this is a series, where the number lets say a number 'A' is the average of two prime number 'b' and 'c' 
// This series is also widely known as "Twin prime"
//  we can figure out the nexet integer by taking the average of prime[i] and prime[i-1] 
//  Ill get the series by first taking all the prime number and then print the series with the help of prime array
// 4 6 12 18 30 42

#include<iostream>
#include<vector> 
#include<cmath>
using namespace std;

// auxillary array to store all prime number
vector<int> prime(101,0);

// Helping function to fill the prime array
//  Sieve algorithm
vector<int> isPrime(){
  vector<bool> check(100,true); // auxillary array to check if the next comin integer is prime or not
  check[0] = check[1] = false;
  vector<int> ans;
  for(int i=2; i<=100; i++){
    if(check[i]==true){
      prime[i]++;
      
      if(check[i-2] && prime[i-2]==1){ // checking if my i is prime and my i-2 is prime
      // if both are prime than their average will always be i-1
        ans.push_back(i-1);
      }  
      for(int j=i*i; j<=100;j=j+i){
        check[j]=false;
      }
    }
  }
  return ans;
}


int main(){
  // a variable to get how many element you need in sequence
  int n; cin>>n;
  vector<int> res=isPrime();
  for(auto i: res) cout << i <<' ';
}