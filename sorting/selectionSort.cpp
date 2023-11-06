#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    int min = INT_MAX;
    int idx = -1;
    for(int j=i; j<n; j++){
        if(arr[j]<min) {
            min = arr[j];
            idx = j;
        }
       
    }
     swap(arr[i],arr[idx]);
  }
}
 
int main()
{
int arr[]={4,3,2,7,8,5};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 
 
 
    return 0;
}