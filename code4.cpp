#include <iostream>
using namespace std;

 int linearsearch (int *arr, int n , int key ) {
    for (int i=0; i<=n; i++) {
        if (arr[i]== key){
            return i;
        }
    }
    return -1;
 }
 int main () { 
    int arr[]= {2,5,7,8,6,8,6,7};
    int n = sizeof(arr) / sizeof(int);
     
     cout << linearsearch (arr,n,8)<< endl;
     return 0;
 }
   