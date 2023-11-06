#include<bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n){
 for(int i=0; i<n; i++){
    int j =i;
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
 }
}
 
int main()
{
int arr[]={4,3,2,7,8,5};
int n = sizeof(arr)/sizeof(arr[0]);
insertionSort(arr,n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

 
 
 
    return 0;
}