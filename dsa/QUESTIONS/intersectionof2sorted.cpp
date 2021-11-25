#include<bits/stdc++.h>
using namespace std;
void section(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]>b[j]){ j++;}
        else if(a[i]<b[j]){ i++;}
        else {cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
int main(){
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    int m=5,n=4;
    printIntersection(arr1,arr2,m,n);
    cout<<endl;
    section(arr1,arr2,m,n);
    return 0;
}