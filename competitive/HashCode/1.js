let n=3;
let arr =[1,2,3,4,5,6]
let i=1, j=n+1;
while(i<n && j<2*n){
  let temp =arr[i];
  arr[i]=arr[j]
  arr[j]=temp;
  i+=2;
  j++;
}
console.log(arr);