// Find the largest rectangle in matric with 1

#include<iostream>
#include<stack>
using namespace std;

// ! Naive o(r3c2)

// Traversing for each element of row will take OR3c2

// ! Efficient O(RC)

// find the largest rectangle with the help of stack and process on that
// int R=4, C=5;
// int large(int** mat){
//   return 1;
// }

// int maxrectang(int mat[5][4]){
//   int res=large(mat[0][C]);
//   for(int i=1;i<R;i++){
//     for(int j=0;j<C ; j++){
//     if(mat[i][j]==1) mat[i][j] += mat[i-1][j];
//     }
//     res=max(res,large(mat[i],C));
//   }
//   return res;
// }
