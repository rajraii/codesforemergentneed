// We have to print all the pallindrome years in the range 
// for getting the pallindrome year, first we'll try to achieve the 

#include<iostream>
using namespace std;

bool isLeap(int year){
  return (((year%4 == 0)
    && (year%100 != 0)) ||
    (year % 400 == 0));
}

bool isValid(int d , int m, int y){
  if(m<1 || m>12) return false;
  if(d<1 || d>31) return false;

  // for february 
  if(m==2) {
    if(isLeap(y)) return (d<=29);
    else return d<=28;
  }

  // for months which has days = 30
  if(m==4 || m==6 || m==11)
    return (d<=30);

  return true;
}

string reverse(string s){ 
  int i=0, j=s.length()-1;
  while(i<j){
    swap(s[i],s[j]);
    i++, j--;
  }
  return s;
}

void pallindromeDates(int y1, int y2){
  for(int year=y1; year<=y2;year++){
    string s= to_string(year);
    string rev= reverse(s);

    int d= stoi(rev.substr(0,2));
    int m= stoi(rev.substr(2,2));

    if(isValid(d,m,year)){
      string month, date;
      if(m<10){
        month = to_string(m);
        month = "0" + month;
      } 
      else {
        month= to_string(m);
      }
      if(d<10){
        date = to_string(d);
        date = "0" + date;
      } 
      else {
        date= to_string(d);
      }
      cout<< date <<'/'<< month << '/' <<  s << endl;
    }
  }
}

int main(){
  int year1,year2;
  cin>>year1>>year2; 
  pallindromeDates(year1,year2); 
}

//  resultant output on input year1= 2001 and year2= 2021
// 10/02/2001
// 20/02/2002
// 01/02/2010
// 11/02/2011
// 21/02/2012
// 02/02/2020
// 12/02/2021