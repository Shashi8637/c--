#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) v[k++]=b[j++];
        else v[k++]=a[i++];
    }
    if(i==a.size()){
        while(j<b.size()){
             v[k++]=b[j++];
        }
    }if(j==b.size()){
        while(i<a.size()){
             v[k++]=a[i++];
        }
    }

}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0; i<n1; i++){
        a[i]=v[i];
    } for(int i=0; i<n2; i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    
    


}
 
int main()
{
int arr[]={3,6,3,8,9,0,1,5,7,27,9,6,8,3,2,4,2};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
mergeSort(v);
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}

  return 0;
}