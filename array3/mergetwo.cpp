#include<bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int>&v,vector<int>&v1){
   int n =v.size();
   int m= v1.size(); 
   vector<int>res(m+n);
   int i=0; 
   int j=0;
   int k=0;
   while(i<=n && j<=m){
    if(v[i]<=v1[j]){
        res[k]=v[i];
        i++;
     
    }
    else{
        res[k]=v1[j];
        j++;
       
         }
   }
   k++;
   if(i==n){
    while(j<=m-1){
      res[k]=v1[j];
      k++;
      j++;  
    }
   }
   if(j==m){
     while(i<=n-1){
        res[k]=v[i];
        k++;
        i++;
     }
   }
   return res;
}

int main()
{
vector<int>v;

v.push_back(9);
v.push_back(2);
v.push_back(3);
v.push_back(2);

vector<int>v1;
v1.push_back(7);
v1.push_back(3);
v1.push_back(8);
v1.push_back(4);
v1.push_back(1);

vector<int>arr =merge(v,v1);
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
 
 
 
    return 0;
}